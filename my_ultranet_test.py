import heterocl as hcl
import numpy as np
from my_ultranet import conv2d
from my_ultranet import relu
from my_ultranet import maxpool2d
from my_ultranet import batchnorm2d

hcl.init()

# Test ReLU
def test_relu():
    print("\nTesting ReLU\n")
    A = hcl.placeholder((2, 3), "A")
    s = hcl.create_schedule(A, relu)
    f = hcl.build(s)

    np_A = np.asarray([[1., -2., 3.], [4., -5., 6]])
    hcl_A = hcl.asarray(np_A)
    hcl_B = hcl.asarray(np.zeros(A.shape))

    f(hcl_A, hcl_B)
    np_A = hcl_A.asnumpy()
    np_B = hcl_B.asnumpy()

    print("Input array:")
    print(np_A)
    print("\nOutput array:")
    print(np_B)

# Test MaxPool
def test_maxpool2d():
    print("\nTesting MaxPool\n")
    A = hcl.placeholder((1, 3, 4, 4), "A")
    s = hcl.create_schedule(A, maxpool2d)
    f = hcl.build(s)

    np_A = np.asarray([[
        [[4., 3., 8., 5.],[9., 1., 3., 6.], [6., 3., 5., 3.], [2., 5., 2., 5.]],
        [[4., 3., 8., 5.],[9., 1., 3., 6.], [6., 3., 5., 3.], [2., 5., 2., 5.]],
        [[4., 3., 8., 5.],[9., 1., 3., 6.], [6., 3., 5., 3.], [2., 5., 2., 5.]]]])

    hcl_A = hcl.asarray(np_A)
    hcl_B = hcl.asarray(np.zeros((1, 3, 2, 2)))

    f(hcl_A, hcl_B)
    np_A = hcl_A.asnumpy()
    np_B = hcl_B.asnumpy()

    print("Input array:")
    print(np_A)
    print("\nOutput array:")
    print(np_B)

# Test Conv2d
def test_conv2d():
    print("\nTesting Conv2d\n")
    A = hcl.placeholder((1, 1, 5, 5), "A")
    Filter = hcl.placeholder((1, 1, 3, 3), "Filter")
    s = hcl.create_schedule([A, Filter], conv2d)
    f = hcl.build(s)

    np_A = np.asarray([[[
                            [3.,3.,2.,1.,0.],
                            [0.,0.,1.,3.,1.],
                            [3.,1.,2.,2.,3.],
                            [2.,0.,0.,2.,2.],
                            [2.,0.,0.,0.,1.]
                        ]]])

    np_Filter = np.asarray([[[
                            [0.,1.,2.],
                            [2.,2.,0.],
                            [0.,1.,2.]
                        ]]])

    hcl_A = hcl.asarray(np_A)
    hcl_Filter = hcl.asarray(np_Filter)
    hcl_B = hcl.asarray(np.zeros((1, 1, 5, 5)))

    f(hcl_A, hcl_Filter, hcl_B)
    np_A = hcl_A.asnumpy()
    np_Filter = hcl_Filter.asnumpy()
    np_B = hcl_B.asnumpy()

    print("Input array:")
    print(np_A)
    print("\nOutput array:")
    print(np_B)

def test_batchnorm2d(d_shape=(1, 1, 3, 3), axis=1):
    hcl.init(hcl.Float())
    data = hcl.placeholder(d_shape)
    if(axis < 0):
        axis += len(d_shape)
    shape = (d_shape[axis],)
    gamma = hcl.placeholder(shape)
    beta = hcl.placeholder(shape)
    moving_mean = hcl.placeholder(shape)
    moving_var = hcl.placeholder(shape)

    def func(data, gamma, beta, moving_mean, moving_var, axis=axis):
        return batchnorm2d(
            data, gamma, beta, moving_mean, moving_var, axis=axis, epsilon=10**-5)[0]
    s = hcl.create_schedule([data, gamma, beta, moving_mean, moving_var], func)
    f = hcl.build(s)
    _data = np.random.randint(10, size=d_shape).astype(float)
    _gamma = np.ones(shape) * 2  # np.random.randint(10,size=shape)
    _beta = np.zeros(shape)  # np.random.randint(10,size=shape)
    _m_mean = np.random.randint(10, size=shape).astype(float)
    _m_var = np.random.randint(10, size=shape).astype(float)
    out = hcl.asarray(np.zeros(d_shape))
    m_mean = hcl.asarray(np.zeros(shape))
    m_var = hcl.asarray(np.zeros(shape))
    f(hcl.asarray(_data), hcl.asarray(_gamma), hcl.asarray(_beta),
      hcl.asarray(_m_mean), hcl.asarray(_m_var), out)

    def bn(a):
        np_sqrt = np.sqrt(_m_var + 10**-5)
        return (a - _m_mean)/np_sqrt * _gamma + _beta
    t_out = np.apply_along_axis(bn, axis, _data)
    np.testing.assert_almost_equal(t_out, out.asnumpy(), 3)
    print("passed")

test_batchnorm2d()

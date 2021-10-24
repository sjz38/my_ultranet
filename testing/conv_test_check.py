import numpy as np

heterocl_res = np.load('conv_test_heterocl.npy')
pytorch_res = np.load('conv_test_reference.npy')

print(heterocl_res.shape)
print(pytorch_res.shape)

print(heterocl_res[0][0][4])
print(pytorch_res[0][0][4])
import heterocl as hcl
import torch
import numpy as np


hcl.init(hcl.Float(32))

def kernel(A):
    B = hcl.compute(A.shape, lambda *y: A[y] * 15.0 + 0.5)
    C = hcl.compute(B.shape, lambda *y: hcl.cast(B.dtype, hcl.cast(hcl.Int(32), B[y]))) # has to be separated
    D = hcl.compute(C.shape, lambda *y: C[y] / 15.0)
    return D

A = hcl.placeholder((10,10), "A")
B = hcl.placeholder((10,10), "B")
s = hcl.create_schedule([A], kernel)
f = hcl.build(s)

A_np = np.random.uniform(size=(10,10))
# A_np = np.linspace(0,1,100)
# A_np = A_np.reshape((10,10))
# A_np = np.ones((10,10)) * 0.101
A_hcl = hcl.asarray(A_np.astype(float))
B_hcl = hcl.asarray(np.zeros((10,10)).astype(float))

f(A_hcl, B_hcl)
B_np = B_hcl.asnumpy()

A_torch = torch.tensor(A_np)
n = 2**4 - 1
B_torch = torch.round(A_torch * n) / n
B_torch = B_torch.numpy()
print(A_np)
print("-------")
print(B_np)
print("-------")
print(B_torch)
print("-----")
print(np.sum(B_torch - B_np) / B_np.size)
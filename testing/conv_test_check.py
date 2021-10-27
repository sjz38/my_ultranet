import numpy as np

heterocl_res = np.load('conv_test_heterocl.npy')
pytorch_res = np.load('conv_test_reference.npy')

print(heterocl_res.shape)
print(pytorch_res.shape)

# find error
diff = np.absolute(heterocl_res - pytorch_res)
avg_error = np.sum(diff) / (16*160*320)
print("average error:", avg_error)
print("norm ratio:", np.linalg.norm(heterocl_res - pytorch_res) / np.linalg.norm(heterocl_res + pytorch_res))

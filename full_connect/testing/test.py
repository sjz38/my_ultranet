import numpy as np

reference = np.load("reference_ultranet_output.npy")
heterocl = np.load("heterocl_ultranet_output.npy")
error = np.absolute(reference - heterocl)
avg_error = np.sum(error) / np.prod(error.shape)
print("\naverage error:", avg_error)
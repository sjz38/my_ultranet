import numpy as np

old = np.load('bn_old.npy')
mod = np.load('bn_mod.npy')

print("Old:\n", old)
print("Mod:\n", mod)

# find error
# diff = np.absolute(old - mod)
# diff = old-mod
# print(diff)
# avg_error = np.sum(diff) / (old.shape[1]*old.shape[2]*old.shape[3])
# print("average error:", avg_error)
# print("norm ratio:", np.linalg.norm(old - mod) / np.linalg.norm(old + mod))

diff = np.subtract(old, mod)
avg_diff = np.sum(diff) / (old.shape[1]*old.shape[2]*old.shape[3])
print("Avg Diff: ", avg_diff)
squared = np.square(diff)
mse = squared.mean()
print("Mse: ", mse)

# print(np.allclose(old, mod, atol=1e-2))

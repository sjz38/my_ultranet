import numpy as np

"""
This file compares the outputs from pytorch_refernce.py and heterocl_test.py
and prints errors between all layers.

RUN python pytorch_reference.py AND python heterocl_test.py BEFORE
RUNNING THIS FILE.
"""

output_path = "./outputs/"

conv1_reference = np.load(output_path + "conv1_reference.npy")
conv1_heterocl = np.load(output_path + "conv1_heterocl.npy")
conv1_error = np.absolute(conv1_reference - conv1_heterocl)
conv1_avg_error = np.sum(conv1_error) / np.prod(conv1_error.shape)
print("\nconvolution 1 average error:", conv1_avg_error)

batchnorm1_reference = np.load(output_path + "batchnorm1_reference.npy")
batchnorm1_heterocl = np.load(output_path + "batchnorm1_heterocl.npy")
batchnorm1_error = np.absolute(batchnorm1_reference - batchnorm1_heterocl)
batchnorm1_avg_error = np.sum(batchnorm1_error) / np.prod(batchnorm1_error.shape)
print("\nbatch norm 1 average error:", batchnorm1_avg_error)

relu1_reference = np.load(output_path + "relu1_reference.npy")
relu1_heterocl = np.load(output_path + "relu1_heterocl.npy")
relu1_error = np.absolute(relu1_reference - relu1_heterocl)
relu1_avg_error = np.sum(relu1_error) / np.prod(relu1_error.shape)
print("\nrelu 1 average error:", relu1_avg_error)

pool1_reference = np.load(output_path + "pool1_reference.npy")
pool1_heterocl = np.load(output_path + "pool1_heterocl.npy")
pool1_error = np.absolute(pool1_reference - pool1_heterocl)
pool1_avg_error = np.sum(pool1_error) / np.prod(pool1_error.shape)
print("\npool 1 average error:", pool1_avg_error)

print("")
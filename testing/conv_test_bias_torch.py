import torch
import numpy as np
from torch import nn

input = np.ones((1, 1, 9, 9))
input = torch.tensor(input)

weight = np.ones((1, 1, 3, 3))
weight = torch.tensor(weight)

bias = np.ones((1))
bias = torch.tensor(bias)

out = nn.functional.conv2d(input, weight, bias=bias, stride=1, padding=0)
print(out)
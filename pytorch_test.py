import torch.nn as nn
import torch

class PrintLayer(nn.Module):
    def __init__(self):
        super(PrintLayer, self).__init__()
    
    def forward(self, x):
        print(x)
        return x

model = nn.Sequential(
        nn.BatchNorm2d(1),
        PrintLayer()
    )

M_data = [[[[1., 2., 3.], [4., 5., 6.], [7., 8., 9.]]]]
M = torch.tensor(M_data)

output = model(M)
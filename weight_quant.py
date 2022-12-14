###############################################################################
# weight_quant.py
###############################################################################
# Used to quanitze data. Taken from https://github.com/heheda365/ultra_net

import numpy as np

class uniform_quantize():
    def __init__(self, k):
        self.k = k
    def __call__(self, input):
        n = float(2 ** self.k)
        # n = float(2 ** self.k  - 1)
        out = np.round(input * n) / n
        return out


class weight_quantize_fn():
  def __init__(self, w_bit):
    assert w_bit <= 8 or w_bit == 32
    self.w_bit = w_bit
    self.uniform_q = uniform_quantize(k=w_bit - 1) 

  def __call__(self, x):
    weight = np.tanh(x)
    # weight = weight / 2 / torch.max(torch.abs(weight)) + 0.5
    # weight_q = 2 * self.uniform_q(weight) - 1
    weight = weight / np.max(np.abs(weight))
    # 想量化到带符号的 k bit
    weight_q = self.uniform_q(weight)
    return weight_q 

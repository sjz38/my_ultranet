import numpy as np

batch_out = np.load('./test.npy')
single_0 = np.load('./test0.npy')
single_1 = np.load('./test1.npy')
single_2 = np.load('./test2.npy')
single_3 = np.load('./test3.npy')
single_4 = np.load('./test4.npy')

img_list = []
img_list.append(single_0)
img_list.append(single_1)
img_list.append(single_2)
img_list.append(single_3)
img_list.append(single_4)
single_join = np.stack(img_list)

if batch_out.all() == single_join.all():
    print("True, arrays match")
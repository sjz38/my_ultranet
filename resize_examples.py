import cv2

# program that resizes an image in the same method in dac-sdc/dataset/dataset_utils.py and saves it

input_img_path = "./car16_0001.jpg"
output_img_path = "./car16_0001_resized.jpg"
img_size = 320

img = cv2.imread(input_img_path)
assert img is not None, 'Image Not Found ' + input_img_path
h0, w0 = img.shape[:2]  # original size
print("original size was ", (h0, w0))

img = cv2.resize(img, (img_size, img_size // 2), interpolation=cv2.INTER_LINEAR)
print("image resized to ", img.shape[:2])

cv2.imwrite(output_img_path, img)

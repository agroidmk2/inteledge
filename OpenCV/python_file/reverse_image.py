import numpy as np
import cv2

src = cv2.imread("test.jpg", cv2.IMREAD_COLOR)
#src2 = cv2.imread("raspberry.jpeg", cv2.IMREAD_COLOR)
dst = cv2.bitwise_not(src)
det2 = cv2.bitwise_and(src, dst)
det3 = cv2.bitwise_or(src, dst)
det4 = cv2.bitwise_xor(src, dst)

cv2.imshow("src", src)
cv2.imshow("dst", dst)
cv2.imshow("and", det2)
cv2.imshow("or", det3)
cv2.imshow("xor", det4)
cv2.waitKey()
cv2.destroyAllWindows()
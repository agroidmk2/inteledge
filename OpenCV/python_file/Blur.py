import cv2
src=cv2.imread("test.jpg", cv2.IMREAD_COLOR)
dst = cv2.blur(src, (10,10), anchor=(-1, 1), borderType=cv2.BORDER_REFLECT_101)

cv2.imshow("sdt", dst)
cv2.waitKey()
cv2.destroyAllWindows()
import numpy as np
import cv2

# 이미지 파일을 Read
img = cv2.imread("Capture+_2019-10-18-17-19-37.jpg")

# Image 란 이름의 Display 창 생성 
cv2.namedWindow("image", cv2.WINDOW_NORMAL)

# NUMPY ndarray H/W/C order
print(img.shape)

# Read 한 이미지 파일을 Display
cv2.imshow("image", img)

# 별도 키 입력이 있을 때 까지 대기
cv2.waitKey(0)

# output.png 로 읽은 이미지 파일을 저장
cv2.imwrite("output.png", img)

# Destroy all windows
cv2.destroyAllWindows()

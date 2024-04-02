import numpy as np
import cv2

# Read from the recorded video file
cap = cv2.VideoCapture("ronaldinho.mp4")

# Check if the video file was successfully opened
if not cap.isOpened():
    print("Failed to open the video file.")
    exit()

# Loop while the video capture is open
while cap.isOpened():
    # Read one frame
    ret, frame = cap.read()

    # Check if the frame was successfully read
    if not ret:
        print("Can't receive frame (stream end?). Exiting ...")
        break

    # Display the frame
    cv2.imshow("Frame", frame)

    # Wait for 1 ms and check for the 'q' key to exit
    key = cv2.waitKey(1)
    if key & 0xFF == ord('q'):
        break

# Release the video capture and close all windows
cap.release()
cv2.destroyAllWindows()

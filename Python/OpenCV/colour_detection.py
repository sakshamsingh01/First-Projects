import cv2
import numpy as np
def empty(a):
    pass
def convertor(img,gray):
    img2 = np.zeros_like(img)
    img2[:, :, 0] = gray
    img2[:, :, 1] = gray
    img2[:, :, 2] = gray
    return img2
def Stack_images(img_list_2d):
    return cv2.vconcat([cv2.hconcat(img_list_h) for img_list_h in img_list_2d])

path="Images/Yellow_ferrari.jpg"
cv2.namedWindow("TrackBars")
cv2.resizeWindow("TrackBars",640,240)
cv2.createTrackbar("Hue Min","TrackBars",0,179,empty)
cv2.createTrackbar("Hue Max","TrackBars",36,179,empty)
cv2.createTrackbar("Sat Min","TrackBars",70,255,empty)
cv2.createTrackbar("Sat Max","TrackBars",255,255,empty)
cv2.createTrackbar("Val Min","TrackBars",63,255,empty)
cv2.createTrackbar("Val Max","TrackBars",255,255,empty)

while True:
    img = cv2.imread(path)
    imgHSV = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
    h_min = cv2.getTrackbarPos("Hue Min", "TrackBars")
    h_max = cv2.getTrackbarPos("Hue Max", "TrackBars")
    s_min = cv2.getTrackbarPos("Sat Min", "TrackBars")
    s_max = cv2.getTrackbarPos("Sat Max", "TrackBars")
    v_min = cv2.getTrackbarPos("Val Min", "TrackBars")
    v_max = cv2.getTrackbarPos("Val Max", "TrackBars")
    print(h_min,h_max,s_min,s_max,v_min,v_max)
    lower=np.array([h_min,s_min,v_min])
    upper=np.array([h_max,s_max,v_max])
    mask=cv2.inRange(imgHSV,lower,upper)
    imgResult=cv2.bitwise_and(img,img,mask=mask)
    mask=convertor(img,mask)
    im_tile = Stack_images([[img, imgHSV],
                           [mask, imgResult]])
    cv2.imshow("Result",im_tile)
    cv2.waitKey(1)


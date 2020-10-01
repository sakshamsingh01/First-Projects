import cv2
import numpy as np
def convertor(img,gray):
    img2 = np.zeros_like(img)
    for i in range (0,3):
        img2[:, :, i] = gray
    return img2
def Stack_images(img_list_2d):
    return cv2.vconcat([cv2.hconcat(img_list_h) for img_list_h in img_list_2d])
def getContours(img):
    contours,hierarchy=cv2.findContours(img,cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_NONE)
    for cnt in contours:
        area=cv2.contourArea(cnt)
        if area>500:
            cv2.drawContours(imgContour, cnt, -1, (0, 0, 0), 3)
            peri=cv2.arcLength(cnt,True)
            # corner points location
            approx=cv2.approxPolyDP(cnt,0.02*peri,True)
            # nunber of corners
            objCor=len(approx)
            #Bounding Box
            x,y,w,h=cv2.boundingRect(approx)
            cv2.rectangle(imgContour,(x,y),(x+w,y+h),(0,0,255),2)
            #object type
            if objCor == 3:
                objectType = "Triangle"
            elif objCor==4:
                aspRatio=w/float(h)
                if aspRatio >0.9 and aspRatio <1.2:
                    objectType="Square"
                else:
                    objectType="Rectangle"
            elif objCor > 4:
                objectType="Circle"
            else:
                objectType="None"
            # Text Placing
            cv2.putText(imgContour,objectType,
                        (x,y-5),cv2.FONT_HERSHEY_COMPLEX,0.5,
                        (0,0,0),2)
            # Printing Object Type and area of the object
            print(objectType)
            print(area)
path="Images/Sample_objects.png"
img=cv2.imread(path)

imgContour=img.copy()
imgGray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)

imgCanny=cv2.Canny(imgGray,50,50)
getContours(imgCanny)
#converting 1-channel to 3-channel picture to stack_images
imgGray=convertor(img,imgGray)
imgCanny=convertor(img,imgCanny)
# Displaying result
im_tile = Stack_images([[img, imgGray],
                        [imgCanny,imgContour]])
cv2.imshow("Result", im_tile)
cv2.waitKey(0)
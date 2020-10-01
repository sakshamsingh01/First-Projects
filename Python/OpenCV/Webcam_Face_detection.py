from cv2 import cv2 

def face(img):
    faceCascade= cv2.CascadeClassifier("haarcascades/haarcascade_frontalface_default.xml")
    
    # imgGray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
    
    faces = faceCascade.detectMultiScale(img,2.5,4)
    
    for (x,y,w,h) in faces:
        cv2.rectangle(img,(x,y),(x+w,y+h),(0,0,255),2)
    return img

frameWidth = 640
frameHeight = 480

cap = cv2.VideoCapture(0)
cap.set(3, frameWidth)
cap.set(4, frameHeight)
cap.set(10, 130)
while True:
    success, img = cap.read()
    frame = face(img)
    cv2.imshow("Result",frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

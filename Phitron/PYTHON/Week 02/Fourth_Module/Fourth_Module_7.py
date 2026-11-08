import cv2

cam = cv2.VideoCapture(0)
while True:
    _, frame = cam.read()
    cv2.imshow("my cam", frame)
    cv2.waitKey(1)


""" import time

import pyautogui

# pyautogui.alert('This is an alert box.')
time.sleep(5)
for i in range(1, 5):
    time.sleep(3)
    pyautogui.write('I love Python', interval=0.25)
    pyautogui.press('enter')
"""

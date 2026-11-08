""" My Camera application 

author: Nabila Tarannum """

import sys
from PyQt5.QtWidgets import *  # type: ignore
from PyQt5.QtGui import QPixmap, QImage, QIcon
import cv2


class Window(QWidget):
    """Main app window"""

    def __init__(self):
        super().__init__()

        # variables for app window
        self.window_width = 640
        self.window_height = 400

        # image variable
        self.img_width = 640
        self.img_height = 400

        # set up the window
        self.setWindowTitle("My Camera App")
        self.setGeometry(100, 100, self.window_width, self.window_height)
        self.setFixedSize(self.window_width, self.window_height)
        
        self.ui()

    def ui(self):
        """contains all ui things"""
        # image label
        self.image_lebel = QLabel(self)
        self.image_lebel.setGeometry(0, 0, self.img_width, self.img_height)

        self.show()

    def update(self):
        """update frames"""
        pass

    def save_img(self):
        """save image from camera"""
        pass

    def record(self):
        """record video"""
        pass


# run
app = QApplication(sys.argv)
win = Window()
sys.exit(app.exec_())
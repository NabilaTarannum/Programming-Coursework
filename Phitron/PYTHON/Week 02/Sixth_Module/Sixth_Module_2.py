""" 
Problem: 
    Download and change desktop wallpapers automatically
"""
import json

import PyWallpaper
import requests

api_url = "https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY"

# get the json
response = requests.get(api_url)
content = response.content.decode("utf-8")

# print(response)
# print(type(content))

# convert string to json
dict_content = json.loads(content)
# print(dict_content)

# get the image url
image_url = dict_content["url"]
print(image_url)

# download the image
res = requests.get(image_url)
print(res)

# save the image
with open("/Users/shamilabdullah/Documents/Visual Studio Code/apod.png", "wb") as image:
    image.write(res.content)

# set as wallpaper
PyWallpaper.change_wallpaper(
    "/Users/shamilabdullah/Documents/Visual Studio Code/apod.png"
)

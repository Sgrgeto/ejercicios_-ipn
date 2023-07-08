#!/usr/bin/env python3
from PIL import Image
import subprocess, os
"""Run the ls command and capture the output of the directory images"""
result= subprocess.run(["ls", "images"], capture_output= True)
"""Creates a list, decode the output, split each file \n"""
lista = result.stdout.decode().split()
os.chdir("images")
for file in lista:
  """Path where are saved the iamges with new format"""
        new_image = "/opt/icons/"+file+ ".jpg"
        with Image.open(file) as im:
          """Change the mode to RGB instead of LA to create .jpg files"""
                im = im.convert("RGB").resize((128,128)).rotate(90).save(new_image, "JPEG")

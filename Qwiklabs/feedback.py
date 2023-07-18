#!/usr/bin/env python3
import subprocess, requests

files = subprocess.run(["ls", "/data/feedback"], capture_output=True)
paths =[]
feedback_dict = {}
content=[]
for file in files.stdout.decode().split():
        path = '/data/feedback/' + file
        paths.append(path)
for file in paths:
        text = subprocess.run(["cat", file], capture_output= True)
        content.append(text.stdout.decode().split('\n'))
for info in content:
        feedback_dict['title']=info[0]
        feedback_dict['name']=info[1]
        feedback_dict['date']=info[2]
        feedback_dict['feedback']= info[3]
        response = requests.get('http://34.74.108.45/feedback/')
        response.raise_for_status()
        requests.post('http://34.74.108.45/feedback/', data= feedback_dict)

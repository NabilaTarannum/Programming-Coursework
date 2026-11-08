""" Read_Friend_Age.py """


import csv

with open("./Week 06/Data/My_Friend.csv", "r") as file:
    lines = csv.reader(file)
    header = next(lines)
    for line in lines:
        print(line)
    print(header)

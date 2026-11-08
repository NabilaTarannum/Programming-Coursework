""" Read_Currency.py """


import csv

with open("./Week 06/Data/Currency_Rates.csv", "r") as file:
    lines = csv.reader(file)
    for line in lines:
        if "Bangladesh" in line[0]:
            print(line)

""" Homework -->
Convert 50 USD to BDT
Convert 5000 BDT to USD """

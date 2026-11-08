h = float(input('Enter person height :'))

feet = 3.28084 * h
inch = (feet - int(feet)) * 12

print(int(feet), 'Feet', inch, 'Inch')

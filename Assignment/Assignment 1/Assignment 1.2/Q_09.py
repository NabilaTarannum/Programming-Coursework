r = int(input('Enter the Radius of a Cylinder :'))
h = int(input('Enter the Height of a Cylinder :'))

pi = 3.1428
Volume = pi * r ** 2 * h
surface = (2 * pi * r ** 2) + (2 * pi * r * h)

print('The Volume of a Cylinder', Volume)
print('The Surface area of a Cylinder', surface)

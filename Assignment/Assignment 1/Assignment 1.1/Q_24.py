x = int(input('Input a three digit numbers: '))

x1 = (x // 10) // 10
x2 = (x // 10) % 10
x3 = (x % 10)

print('The sum of digits in the number is', x1+x2+x3)

# Another way 

x = input('Input a three digit numbers: ')

x_ = int(x[0]) + int(x[1]) + int(x[2])

print('The sum of digits in the number is', x_)

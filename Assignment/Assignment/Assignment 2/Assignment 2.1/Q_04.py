need = 375
first = int(input())
second = int(input())
third = int(input())

taka = first + second + third

eat = ((need == taka) or (need < taka)) or False

print('you can eat =', eat)

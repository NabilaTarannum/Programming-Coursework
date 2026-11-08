office = bool(int(input('Is your office open(1) or closed(0)?')))
program = bool(int(input('Do you have(1) a program or not(0)?')))

sleep = office or program
print(sleep)

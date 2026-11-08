num = 1
while num <= 15:
    # print(num)
    if num == 7:
        break
    num += 1

# odd number ==> after dividing by 2, the reminder will be 1
# even number ==> after dividing by 2, the reminder will be 0
num = 7
while num <= 20:
    num += 1
    if num % 2 == 1:
        continue
    print(num)

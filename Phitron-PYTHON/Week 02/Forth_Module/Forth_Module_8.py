# with open('message.txt', 'a') as filewrite:
#     filewrite.write('hello from python')

with open("message.txt", "r") as fileRead:
    text = fileRead.read()
    print(text)

""" 
try:
    num = 15 / 0
    print(num)
except:
    print('somthing went wrong')
finally:
    print('this is done') """

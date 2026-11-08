''' Encrypt the following code so that no one can get your strategy. '''

# data = 'firebaby'

data = 'firebaby'
shift = 1
output = ''

for character in data:
    output += chr((ord(character) + shift - 97) % 26 + 97)

print(output)

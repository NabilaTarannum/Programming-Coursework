import hashlib

# Rtrams
# smart
# Splkiyoanr
# lion

email = "example@example.com"
pwd = "ChairObTableWith3Legs"
pwd_encode = pwd.encode()
pwd_hash = hashlib.md5(pwd_encode).hexdigest()

your_email = "example@example.com"
your_password = "ChairObTableWith3Legs"

hashed_your_password = hashlib.md5(your_password.encode()).hexdigest()

if email == your_email and pwd_hash == hashed_your_password:
    print("right user")
else:
    print("wrong user")

hacker_email = "your@example.com"
hacker_password = "253dca0791e88c49c22cb8855ba84cd3"

print(pwd)
print(pwd_hash)

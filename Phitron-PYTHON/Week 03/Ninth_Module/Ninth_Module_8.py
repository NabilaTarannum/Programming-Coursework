import time
from functools import cache, partial


# 1, 1, 2, 3, 5, 8, 13, 21 ---->
@cache
def fib(n):
    return 1 if n <= 1 else fib(n - 1) + fib(n - 2)


start = time.time()
for i in range(37):
    print(i, fib(i))
end = time.time()
mili_seconds = (end - start) * 1000
print("Time took", mili_seconds)
# without cache
# Time took 21353.50203514099


# partial.py ===>>


def get_number(a, b, c, d):
    return a * 1000 + b * 100 + c * 10 + d


number = get_number(4, 5, 3, 2)
# print(number)
fourth_only = partial(get_number, b=0, c=0, d=0)
number_2 = fourth_only(4)
print(number_2)

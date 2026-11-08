numbers = [12, 45, 65, 23, 89, 78, 11]


def get_numbers(nums):
    yield from nums


result = get_numbers(numbers)
print(next(result))
print(next(result))
print(next(result))
print("I am exploring generator")
print("I have no idea what is a generator")
print(next(result))


""" numbers = [12, 45, 65, 23, 89, 78, 11]
numbers_iter = iter(numbers)
try:
    print(next(numbers_iter))
    print(next(numbers_iter))
    print(next(numbers_iter))
    print('I am exploting iterator')
    print('I am confused about it')
    print(next(numbers_iter))
    print(next(numbers_iter))
    print('doing something else now')
    print(next(numbers_iter))
    print(next(numbers_iter))
except StopIteration:
    print('iteration is stopped') """

numbers = [12, 45, 56, 45, 12, 89]
# print(numbers)
numbers_tuple = 12, 45, 56, 45, 12, 89
# print(numbers_tuple)
# numbers_tuple[2] = 44
# del numbers_tuple[1]
# print(numbers_tuple[3])
# nums_tuple = (12, 45, 56)
# print(nums_tuple)

tuple2d = ([12, 45, 12], [45, 11])
tuple2d[0][1] = 99
print(tuple2d)

short_tuple = (2,)

tuple_from_list = tuple(numbers)
print(tuple_from_list)


""" numbers = [12, 45, 56, 45, 12, 89]
# print(numbers)
# set
nums = {12, 45, 56, 45, 12, 89}
# print(nums)
numbers_set = set(numbers)
print(numbers_set)
numbers_set.add(77)
numbers_set.add(45)
numbers_set.remove(12)
print(len(numbers_set)) """

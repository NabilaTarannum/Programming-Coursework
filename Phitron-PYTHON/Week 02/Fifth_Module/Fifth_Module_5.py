""" def square(x):
    return x * x """

square = lambda x: x * x
result = square(6)
# print(result)

add = lambda x, y: x + y
sum_ = add(45, 56)
print(sum_)

numbers = [12, 45, 65, 23, 89, 78, 11]


def double_it(x):
    return x * 2


double_it2 = lambda x: x * 2
# doubled_number = map(double_it2, numbers)
doubled_number = map(lambda x: x * 2, numbers)
squared_number = map(lambda x: x * x, numbers)
# print(numbers)
# print(list(doubled_number))
# print(list(squared_number))

bigger_numbers = filter(lambda num: num > 50, numbers)
# print(numbers)
# print(list(bigger_numbers))

actors = [
    {"name": "sakib", "age": 34},
    {"name": "manna", "age": 50},
    {"name": "sabana", "age": 65},
    {"name": "bubli", "age": 30},
]

senior_artist = filter(lambda actor: actor["age"] > 35, actors)
print(list(senior_artist))
junior_artist = filter(lambda actor: actor["age"] < 35, actors)
print(list(junior_artist))

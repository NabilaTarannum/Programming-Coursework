num1 = 5
num2 = 12
# print(num1 + num2)
f_name = "alu"
l_name = "khan"
# print(f_name + l_name)
nums_1 = [1, 2, 3, 4]
nums_2 = [41, 42, 43, 44]
# print(nums_1 + nums_2)
is_learning = True
is_practicing = True
# print(is_learning + is_practicing)


# dunder
# magic method
# special method
class Person:
    def __init__(self, name, age, money) -> None:
        self.name = name
        self.age = age
        self.money = money

    def __add__(self, other) -> None:
        # return self.money + other.money
        return self.age + other.age


alim = Person("Alim", 15, 400)
dalim = Person("Dalim", 16, 500)
print(alim + dalim)
x = 5
print(type(alim))

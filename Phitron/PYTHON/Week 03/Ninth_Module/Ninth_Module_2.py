class Person:
    def __init__(self, name, age, money, hight=65) -> None:
        self.name = name
        self.age = age
        self.money = money
        self.hight = hight

    def __add__(self, other) -> None:
        # return self.money + other.money
        return self.age + other.age

    def __call__(self):
        print(f"this is {self.name} and have {self.money}")

    def __eq__(self, other):
        return self.age == other.age

    def __len__(self):
        return self.hight

    def __repr__(self):
        return f"Name: {self.name} age: {self.age} money: {self.money}"


alim = Person("Alim", 15, 400, 68)
dalim = Person("Dalim", 16, 500)
print(alim + dalim)
x = 5
# print(type(alim))
print(alim.age)
alim()
print("compare two objedts", alim == dalim)

friends = [45, 65, 98, 12, 32]
print(len(alim))

print(dalim)

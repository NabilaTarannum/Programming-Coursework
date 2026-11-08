# poly => many
# morph => different

# print(2 + 8)
# print("hello" + "bondhu")
# print([45, 68] + [12, 87])

# overriding


class Animal:
    def __init__(self, name):
        self.name = name

    def make_sound(self):
        print("amimal making some sound")


class Cat(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print("meow meow")


class Dog(Animal):
    def __init__(self, name):
        Animal.__init__(self, name)

    def make_sound(self):
        print("bark bark")


class Horse(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print("neigh neigh")


don = Cat("don")
# don.make_sound()

shepard = Dog("shepard")
# shepard.make_sound()

manik = Horse("manik roton")
# manik.make_sound()

don2 = Dog("ashol don")
# don2.make_sound()

animals = [don, shepard, manik, don2]

for animal in animals:
    animal.make_sound()

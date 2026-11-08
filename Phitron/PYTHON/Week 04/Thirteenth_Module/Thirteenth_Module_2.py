from abc import ABC, abstractmethod

# abstract base class
class Animal(ABC):
    @abstractmethod
    def eat(self):
        pass

    def name(self):
        pass

    @abstractmethod
    def move(self):
        print("moving around the zoo")


class Monkey(Animal):
    def sing(self):
        print("monkey is singing")

    def eat(self):
        print("eating banana")

    def move(self):
        print("hanging on the branches of the trees")
        super().move()


class Tiger(Animal):
    def eat(self):
        pass

    def move(self):
        pass


layka = Monkey()
print(layka)
layka.eat()
layka.move()

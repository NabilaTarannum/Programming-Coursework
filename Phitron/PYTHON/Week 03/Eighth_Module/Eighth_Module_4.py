class Shop:
    cart = []

    def __init__(self, buyer):
        self.buyer = buyer

    def add_to_cart(self, item):
        self.cart.append(item)


shopper_1 = Shop("alu khan")
shopper_1.add_to_cart("tshirt")
print(shopper_1.cart)

shopper_2 = Shop("chanachur khan")
shopper_2.add_to_cart("shoes")
print(shopper_2.cart)


class Laptop:
    def __init__(self, brand, age):
        self.brand = brand
        self.age = age

    def increage_age(self, age=1):
        self.last_age = self.age
        self.age = self.age + age

    def repair(self, life_increase=-5):
        self.increage_age(life_increase)


my_laptop = Laptop("apple", 1)
my_laptop.increage_age()
my_laptop.age = 17
my_laptop.increage_age()
my_laptop.increage_age()
# print(my_laptop.last_age)
print(my_laptop.age)
my_laptop.repair(-7)
print(my_laptop.age)
print(my_laptop.__dict__)

# inheritance
# DRY --> Do not Repeat Yourself
# base class will have only the common attributes and methods
class Divice:
    def __init__(self, brand, price, color):
        self.brand = brand
        self.price = price
        self.color = color

    def re_sale(self):
        print("ready to sell again ")


class Laptop(Divice):
    def __init__(self, brand, price, color, disc_size) -> None:
        super().__init__(brand, price, color)
        self.disc_size = disc_size

    def run(self) -> None:
        print("running the laptop")

    def __repr__(self) -> str:
        return f"Laptop { self.brand} : {self.price} : {self.color}"

    def purchase(self, money, discount):
        if money < (self.price - self.price * discount / 100):
            return "no laptop for you"
        print("this device is for you")
        return money - self.price


class Phone:
    def __init__(self, brand, price, color, camera, sim_num) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.camera = camera
        self.sim_num = sim_num

    def is_dual_sim(self) -> None:
        return self.sim_num > 1

    def purchase(self, money, discount):
        if money < (self.price - self.price * discount / 100):
            return "no laptop for you"
        print("this device is for you")
        return money - self.price

    def __repr__(self) -> str:
        return f"Phone { self.brand} : {self.price} : {self.color}"


class Watch:
    def __init__(self, brand, price, color, watch_type) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.watch_type = watch_type

    def is_digital(self) -> None:
        return self.watch_type == "digital"

    def purchase(self, money):
        if money < self.price:
            return "no laptop for you"
        print("this device is for you")
        return money - self.price


class Manager:
    def __init__(self, name, salary, experience, desugnation) -> None:
        pass

    def withdraw_salary(self) -> None:
        pass

    def day_total_sales(self) -> None:
        pass

    def handle_customer_complain(self) -> None:
        pass


class SalesPerson:
    def __init__(self, name, salary, experience, desugnation, commission) -> None:
        pass

    def withdraw_salary(self) -> None:
        pass

    def handle_custoer(self) -> None:
        pass


lenovo = Laptop("Lenovo", 420000, "black", "500gb")
hp = Laptop("HP", 35000, "silver", "250gb")
print(lenovo)
print(hp)

oppo = Phone("Oppo", 15000, "black", "15mp", 2)
samsung = Phone("Samsung", 21000, "silver", "21mp", 1)
print(samsung)
print(oppo)

hp.re_sale()
print(hp.brand)

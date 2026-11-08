# laptop, phone, watch, tablet


class Laptop:
    def __init__(self, brand, price, color, disc_size) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.disc_size = disc_size

    def run(self) -> None:
        print("running the laptop")

    def purchase(self, money):
        if money < self.price:
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


class Watch:
    def __init__(self, brand, price, color, watch_type) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.watch_type = watch_type

    def is_digital(self) -> None:
        return self.watch_type == "digital"


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

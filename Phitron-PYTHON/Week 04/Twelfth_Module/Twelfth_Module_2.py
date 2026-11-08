class Bus:
    owner = "Ena Transport"

    def __init__(self, route, license, driver) -> None:
        self.route = route
        self.license = license
        self.driver = driver
        self.trips = []

    def start_trip(self, start_time) -> None:
        self.trips.append(start_time)


class Driver:
    def __init__(self, name, license, address, salary) -> None:
        pass

    def drive(self, start, end) -> None:
        pass

    def take_vacation(self) -> None:
        pass

    def withdraw_salary(self) -> None:
        pass


class Passenger:
    def __init__(self, name, mobile, destination) -> None:
        pass

    def purchase_ticket(self, destination, money) -> None:
        pass


class Manager:
    def __init__(self, name, mobile, department) -> None:
        pass


class Counter:
    def __init__(self, manager, location) -> None:
        pass


num = 55
name = "Ena"
rashed = Passenger("Rashed", "01717", "Khulna")

print(rashed)

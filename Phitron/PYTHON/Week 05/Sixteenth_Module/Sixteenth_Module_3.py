""" user.py """


import hashlib
import threading
from random import randint, choice
from Sixteenth_Module_4 import BRTA
from Sixteenth_Module_5 import Car, Bike, Cng
from Sixteenth_Module_6 import uber


class UserAlreadyExists(Exception):
    def __init__(self, email, *args: object) -> None:
        print(f"user: {email} already exists.")
        super().__init__(*args)


license_authority = BRTA()


class User:
    def __init__(self, name, email, password) -> None:
        self.name = name
        self.email = email

        pwd_encrypted = hashlib.md5(password.encode()).hexdigest()
        already_exists = False
        with open("Week 05/Sixteenth_Module/users.txt", "r") as file:
            if email in file.read():
                already_exists = True
                # raise UserAlreadyExists(email)
        file.close()
        if not already_exists:
            with open("users.txt", "a") as file:
                file.write(f"{email} {pwd_encrypted}\n")
            file.close()
        # print(self.name, "user created")

    @staticmethod
    def log_in(email, password):
        stored_password = ""
        with open("users.txt", "r") as file:
            lines = file.readlines()
            for line in lines:
                if email in line:
                    stored_password = line.split(" ")[1]
        file.close()

        hashed_password = hashlib.md5(password.encode()).hexdigest()
        if hashed_password == stored_password:
            print("valid user password")
            return True
        else:
            print("invalid user password")
            return False
        # print(f"password found {stored_password}")


class Rider(User):
    def __init__(self, name, email, password, location, balance) -> None:
        super().__init__(name, email, password)
        self.location = location
        self.balance = balance
        self.__trip_history = []

    def set_location(self, location):
        self.location = location

    def get_location(self):
        return self.location

    def get_trip_history(self):
        return self.__trip_history

    def start_a_trip(self, fare, trip_info):
        print(f"A trip started for {self.name}")
        self.balance -= fare
        self.__trip_history.append(trip_info)


class Driver(User):
    def __init__(self, name, email, password, location, license) -> None:
        super().__init__(name, email, password)
        self.location = location
        self.__trip_history = []
        self.license = license
        self.valid_driver = license_authority.validate_license(email, license)
        self.earning = 0
        self.vehicle = None

    def take_driving_test(self):
        result = license_authority.take_driving_test(self.email)
        if result == False:
            self.license = None
        else:
            self.license = result
            self.valid_driver = True

    def register_a_vehicle(self, vehicle_type, license_plate, rate):
        if self.valid_driver is True:
            if vehicle_type == "car":
                self.vehicle = Car(vehicle_type, license_plate, rate, self)
            elif vehicle_type == "bike":
                self.vehicle = Bike(vehicle_type, license_plate, rate, self)
            else:
                self.vehicle = Cng(vehicle_type, license_plate, rate, self)
            uber.add_a_vehicle(vehicle_type, self.vehicle)

    def start_a_trip(self, start, destination, fare, trip_info):
        self.earning += fare
        self.location = destination
        self.__trip_history.append(trip_info)
        # start thread
        trip_thread = threading.Thread(
            target=self.vehicle.start_driving,
            args=(
                start,
                destination,
            ),
        )
        trip_thread.start()
        # self.vehicle.start_driving(start, destination)


""" hero = User("Hero Alom", "hero@alom.com", "heroOhHero")
User.log_in("hero@alom.com", "heroOhHero")

kuber = Driver("Kuber Maji", "kuber@maji.com", "kopilaJaisna", 54, 4556)

result = license_authority.validate_license(kuber.email, kuber.license)
print(result)
kuber.take_driving_test()
result = license_authority.validate_license(kuber.email, kuber.license)
print(result) """

rider1 = Rider("rider1", "rider1@gmail.com", "rider1", randint(0, 100), 1000)
rider2 = Rider("rider2", "rider2@gmail.com", "rider2", randint(0, 100), 5000)
rider3 = Rider("rider3", "rider3@gmail.com", "rider3", randint(0, 100), 5000)
rider4 = Rider("rider4", "rider4@gmail.com", "rider4", randint(0, 100), 5000)
rider5 = Rider("rider5", "rider5@gmail.com", "rider5", randint(0, 100), 5000)

vehicle_type = ["car", "bike", "cng"]

for i in range(1, 100):
    driver1 = Driver(
        f"driver {i}",
        f"driver{i}@gmail.com",
        f"driver{i}",
        randint(0, 100),
        randint(1000, 9999),
    )
    driver1.take_driving_test()
    driver1.register_a_vehicle(choice(vehicle_type), randint(10000, 99999), 10)

print(uber.get_available_car())
uber.find_a_vehicle(rider1, choice(vehicle_type), randint(1, 100))
uber.find_a_vehicle(rider2, choice(vehicle_type), randint(1, 100))
uber.find_a_vehicle(rider3, choice(vehicle_type), randint(1, 100))
uber.find_a_vehicle(rider4, choice(vehicle_type), randint(1, 100))
uber.find_a_vehicle(rider5, choice(vehicle_type), randint(1, 100))

print(rider1.get_trip_history())
print(uber.total_income())

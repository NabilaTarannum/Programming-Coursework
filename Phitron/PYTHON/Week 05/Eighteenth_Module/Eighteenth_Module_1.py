""" Attributes Validation Using Assert """

""" todo.txt =====>>

1. Attributes Validation Using Assert
2. Dynamic Attributes
3. Create objects from json in files
4. Multiply inheritance and MRO(Method Resolution Order) """

""" validate.py =====>> """


class Item:
    def __init__(self, itemName, itemPrice) -> None:
        assert itemPrice >= 0, f"Error line 3, {itemPrice} is invalid"
        self.itemName = itemName
        self.itemPrice = itemPrice


item = Item("Plate", 150)
print(item.itemName, item.itemPrice)


class Person:
    def __init__(self, name, phone, age) -> None:
        assert age >= 13, "Only greater than 13 is permitted"
        assert len(phone) == 11, "invalid phone number"
        self.name = name
        self.phone = phone
        self.age = age

    def __repr__(self) -> str:
        return f"{self.name} {self.phone} {self.age}"


user = Person("Nabila Tarannum", "01234567890", 17)
print(user)

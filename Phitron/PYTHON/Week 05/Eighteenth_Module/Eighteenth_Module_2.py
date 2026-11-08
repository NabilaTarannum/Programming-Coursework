""" Dynamic Attributes """


""" dynamic_attributes.py =====>> """


class Item:
    all = []

    def __init__(self, itemName, itemPrice) -> None:
        self.__itemName = itemName
        self.__itemPrice = itemPrice
        self.all.append(self)

    def __repr__(self) -> str:
        return f"Item({self.itemName},{self.itemPrice})"


item1 = Item("Bowl", 100)
item2 = Item("Plate", 150)
item1.__discount = 10
item1._Item__itemName = "Bowl Broken"
# print(item1.__discount)

# item1.discount = 10
# item2.offer = "60%"

# Item.all.append(item1)
# print(Item.all)
print(item1.__dict__)
# print(item2.__dict__)

# print(item1.all)
# print(item2.all)

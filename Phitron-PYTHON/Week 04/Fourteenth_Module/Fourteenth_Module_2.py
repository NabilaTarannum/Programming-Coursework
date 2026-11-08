""" Manages Bank Account """


class Account:
    accID = 1

    def __init__(self, name, age, nid_num, balance):
        self.name = name
        self.age = age
        self.nid_num = nid_num
        self.balance = balance

        # update acc id
        self.account_id = Account.accID
        Account.accID += 1

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        self.balance -= amount


acc_1 = Account("John", 63, 600, 500)
acc_2 = Account("kona", 62, 500, 1000)

# print("First one", acc_1.account_id)
# print("Second one", acc_2.account_id)

print("Deposit")
acc_1.deposit(2000)
print("acc 1", acc_1.balance)
acc_2.deposit(200)
print("acc 2", acc_2.balance)

print("Withdraw")
acc_1.withdraw(100)
print("acc 1", acc_1.balance)
acc_2.withdraw(300)
print("acc 2", acc_2.balance)

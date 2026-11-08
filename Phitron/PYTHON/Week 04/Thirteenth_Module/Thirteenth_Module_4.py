class Account:
    def __init__(self, holder, initial_balance):
        self.holder = holder  # public attribute
        self._account_number = 165
        self.__balance = initial_balance  # private attribute

    def deposite(self, amount):
        print(f"adding more {amount} to your account")
        self.__balance += amount

    def withdraw(self, amount):
        print(f"withdrawing {amount} to your account")
        self.__balance -= amount


class StudentAccount(Account):
    def __init__(self, holder, initial_balance, school):
        self.school = school
        super().__init__(holder, initial_balance)

    def get_balance(self):
        return self._account_number


rafsan = StudentAccount("Rafsan", 50000, "IUB")
# print(rafsan.__balance)
print(rafsan.holder)
rafsan.deposite(20000)
rafsan.deposite(35000)
rafsan.deposite(15000)
print(rafsan.get_balance())
# rafsan.__balance = 0
# print(rafsan.__balance)
rafsan._account_number = 135
print(rafsan._account_number)

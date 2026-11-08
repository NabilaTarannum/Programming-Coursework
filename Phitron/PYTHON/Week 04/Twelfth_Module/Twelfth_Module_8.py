# parent class or base class
class BaseClass:
    pass


# derived class or child class
class DrivedClass:
    pass


# 1. single Inheritance (parent --> child)
# 2. Multi level Inheritance (grandpa --> parent --> child)
# 3. Multiple Inheritance (father, mother: child --> (father, mother))
# 4. Hierarchical Inheritance (father: father --> you, father --> brother, father --> sister)

""" Hierarchical Inheritance ============>> """


class Employee:
    def __init__(self, name, id, salary, position, experience):
        self.name = name
        self.id = id
        self.salary = salary
        self.position = position


class Developer(Employee):
    def __init__(self, name, id, salary, position, tech, focus):
        self.tech = tech
        self.area_of_work = focus
        super().__init__(self, name, id, salary, position)


class Testing(Employee):
    pass


class Sales(Employee):
    pass


class TechLead(Employee):
    def __init__(self, name, id, salary, position, team):
        self.team = team
        super().__init__(self, name, id, salary, position)

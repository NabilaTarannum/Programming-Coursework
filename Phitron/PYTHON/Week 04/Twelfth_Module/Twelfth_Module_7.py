# parent class or base class
class BaseClass:
    pass


# derived class or child class
class DrivedClass:
    pass


# 1. single inheritance
# 2. Multi level inheritance
# 3. Multiple inheritance

""" Multiple inheritance ============>> """


class School:
    def __init__(self, name) -> None:
        self.school_name = name
        print("School init called")


class Grade:
    def __init__(self, grade_name) -> None:
        self.grade_name = grade_name
        print("Grade class init called")


class SportsTeam:
    def __init__(self, sport_name) -> None:
        self.sport = sport_name
        self.team = []

    def add_player(self, player_name):
        self.team.append(player_name)


class Student(School, Grade, SportsTeam):
    def __init__(self, name, grade_name, school_name, sports_name) -> None:
        self.name = name
        print("Student init called")
        Grade.__init__(self, grade_name)
        School.__init__(self, school_name)
        SportsTeam.__init__(self, sports_name)


ananta_j = Student("AJ", "MBA", "UK School", "cricket")
print(ananta_j.name)
print(ananta_j.grade_name)
print(ananta_j.school_name)
ananta_j.add_player("Borsha")
ananta_j.add_player("AJ")
print(ananta_j.team)

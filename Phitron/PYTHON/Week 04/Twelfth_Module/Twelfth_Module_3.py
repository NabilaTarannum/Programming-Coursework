import time


class School:
    # constructor
    def __init__(self, name, address, principal="") -> None:
        self.name = name
        self.address = address
        self.principal = principal
        self.grades = []

    def add_grade(self, name, teacher):
        new_grade = Grade(name, teacher)
        self.grades.append(new_grade)

    def remove_grade(self, name):
        idx = 0
        for i, grade in enumerate(self.grades):
            if grade.name == name:
                idx = i
        del self.grades[idx]


class Grade:
    # constructor
    def __init__(self, name, teachers) -> None:
        self.students = []
        self.name = name
        self.teachers = teachers

    def __repr__(self) -> str:
        return f"{self.name} with teacher {self.teachers}"

    def __del__(self) -> None:
        print(f"Deleting {self.name} with teacher {self.teachers}")


oxford = School("Oxford Kid Academy", "Mirpur", "Obayed Alom")
oxford.add_grade("class 3", "Osman Gani")
oxford.add_grade("class 5", "Nazma Mam")
oxford.add_grade("class 8", "Razib Sir")
print(oxford.grades)

oxford.remove_grade("class 5")
print(oxford.grades)

print("My code running is done")
time.sleep(10)

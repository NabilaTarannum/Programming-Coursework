""" Duck Typing """


class School:
    def __init__(self, name) -> None:
        self.schoolName = name

    def say_hello(self):
        print("Hello from school")


class Teacher:
    def __init__(self, name) -> None:
        self.teacherName = name

    def say_hello(self):
        print("Hello from teacher")


class Student:
    def __init__(self, name, obj) -> None:
        self.studentName = name
        obj.say_hello()


school = School("trust school")
teacher = Teacher("Solaiman sir")
student = Student("Rakib", teacher)


# solaiman_sir = Teacher("Solaiman Mia")
# rahim_mia = Teacher("Rahim Mia")
# ms_rahima = Teacher("Ms Rahima")
# student = Student("rahim")
# # print(student.students)
# student.enter_in_a_teacher(rahim_mia)
# student.enter_in_a_teacher(ms_rahima)
# print(rahim_mia.students)
# print(ms_rahima.students)


class Student:

    def __init__(self, name, age, grade):
        self.name = name
        self.age = age
        self.grade = grade

    def get_grade(self):
        return self.grade

class Course:
    def __init__(self, course_name, max_students):
        self.course_name = course_name
        self.max_students = max_students
        self.students = []

    def add_student(self, student):
        if len(self.students) < self.max_students:
            self.students.append(student)
            return True
        return False

    def get_avarage_grade(self):
        avg_grade = 0
        for student in self.students:
            avg_grade += student.get_grade()

        return avg_grade / len(self.students)


s1 = Student("Saqib", 24, 95)
s2 = Student("Aminul", 24, 85)
s3 = Student("Saima", 23, 80)

course = Course("PL1", 2)
course.add_student(s1)
course.add_student(s2)
print(course.add_student(s3))
print(course.get_avarage_grade())

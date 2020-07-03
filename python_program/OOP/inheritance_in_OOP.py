class Pet:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        
    def show(self):
        print(f"I am {self.name} and I am {self.age} years old")

    def speak(self):
        print("I don't know what to say")

class Cat(Pet):
    def __init__(self, name, age, color):
        super().__init__(name, age)
        self.color = color

    def speak(self):
        print("Meow")

    def show(self):
        print(f"I am {self.name} and I'm {self.age} years old and I'm {self.color}")

class Dog(Pet):
    def speak(self):
        print("Bark")

p = Pet("Bill", 19)
p.speak()
c = Cat("Saqib", 24, "Brown")
c.show()
c.speak()
d = Dog("Aminul", 25)
d.speak()

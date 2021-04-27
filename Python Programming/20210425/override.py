# Python override

from math import pi

# Parent Class
class Shape:
    # constructor
    def __init__(self, name):
        self.name = name
    
    # calculate the area
    def area(self):
        pass
    
    # print a fact(string)
    def fact(self):
        return "I am a two-dimensional shape."
    
    # represent the class objects as a string
    def __str__(self):
        return self.name

# Child Class
class Square(Shape):
    # constructor
    def __init__(self, length):
        # super() allows to reuse code rather than copying it
        super().__init__("Square")
        self.length = length

    # calculate the area
    def area(self):
        return self.length**2

    # print a fact about square
    def fact(self):
        return "Squares have each angle equal to 90 degrees."

# Child Class
class Circle(Shape):
    # constructor
    def __init__(self, radius):
        super().__init__("Circle")
        self.radius = radius
    
    # calculate the area
    def area(self):
        return pi*self.radius**2


a = Square(5)
b = Circle(10)
print("Shape:", b)
print(b.fact())
print(a.fact())
print("Circle`s area:", b.area())
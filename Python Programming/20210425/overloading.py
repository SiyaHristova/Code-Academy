# Python Overloading

class Point:
    # this method called when an object is created from the class and it allow the class to initialize the attributes of a class
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y
    
    # sum of two numbers or concatenate two strings
    def __add__(self, other):
        x = self.x + other.x
        y = self.y + other.y
        return Point(x, y)
    
    # represents the class objects as a string
    def __str__(self):
        return "{0}, {1}".format(self.x, self.y)


p1 = Point("Hello ", 5)
p2 = Point("World", 6)

print(p1+p2)
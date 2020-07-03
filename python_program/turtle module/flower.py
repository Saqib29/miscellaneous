import turtle
import math

s = turtle.Turtle()

s.color("red", "yellow")
s.speed(15)
s.begin_fill()
for i in range(2000):
	s.forward(10)
	s.left(math.sin(i/10)*25)
	s.left(20)
s.end_fill()

turtle.done()
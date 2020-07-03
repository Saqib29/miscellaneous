import turtle

star = turtle.Turtle()
star.getscreen().bgcolor("cyan")
star.speed(15)
def stars(star, size):
	if size <= 10:
		return
	else:
		star.begin_fill()
		for i in range(5):
			star.forward(size)
			stars(star, size/3)
			star.left(216)
		star.end_fill()
stars(star, 300)
turtle.done()



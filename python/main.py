from turtle import *
from numpy import random

speed(0)
colors = ['yellow', 'gold', 'orange', 'red', 'maroon', 'violet', 'magenta', 'purple', 'navy', 'blue', 'skyblue', 'cyan', 'turquoise', 'lightgreen', 'green', 'darkgreen', 'chocolate', 'brown', 'black', 'gray']

ang = [-10,20,10,-30,-5]

i = 0

hideturtle()

for i in range(30):
    color(colors[i%len(colors)])
    for x in range(4):
        circle(random.randint(10,100))
        lt(90)

    for y in range(4):
        circle(random.randint(10,100))
        lt(90)
            

exitonclick()

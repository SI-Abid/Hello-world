from turtle import *
import random as r 
import numpy as np

pensize(2)
speed(0)
colors = ['yellow', 'gold', 'orange', 'red', 'maroon', 'violet', 'magenta', 'purple', 'navy', 'blue', 'skyblue', 'cyan', 'turquoise', 'lightgreen', 'green', 'darkgreen', 'chocolate', 'brown', 'black', 'gray']
for i in range(360):
    color = colors[r.randint(0,len(colors)-1)]
    # print(color)
    pencolor(color)
    fd(r.randint(100, 250))
    goto(0, 0)
    lt(1)

exitonclick()
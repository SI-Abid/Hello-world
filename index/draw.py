from turtle import *
import random as r 
import numpy as np
# import cv2
# import pyautogui as pg
import keyboard as kb

def colorBomb():
    for i in range(360):
        color = colors[r.randint(0,len(colors)-1)]
        # print(color)
        pencolor(color)
        fd(r.randint(100, 250))
        goto(0, 0)
        lt(1)


def rainbow():
    penup()
    goto(-250, 0)
    cnt = 1
    for c in colors:
        pendown()
        pencolor(c)
        setheading(-90)
        circle(300-cnt, -180)
        penup()
        goto(-250+cnt, -cnt)
        
        cnt+=2


def drawSquare(len, color):
    pencolor(color)
    for _ in range(4):
        fd(len)
        lt(90)


def spiralBomb(density):
    turn = 360/len(colors)
    for _ in range(density):
        for c in colors:
            drawSquare(200, c)
            lt(turn/density)


def polygon(len, sides):
    angle = 360/sides
    for _ in range(sides):
        fd(len)
        lt(angle)


def snowFlake(len):
    for i in range(24):
        pencolor(colors[i%20])
        for _ in range(5):
            for _ in range(4):
                fd(len)
                lt(60)
            lt(120)
        lt(30)
        # fd(len)
        rt(30)
        for _ in range(5):
            for _ in range(4):
                fd(len)
                rt(60)
            rt(120)
        # rt(30)
        fd(2*len)
        lt(15)


def drawOnCommand():
    while True:
        if kb.is_pressed('q'):
            seth(135)
            fd(10)
        if kb.is_pressed('e'):
            seth(45)
            fd(10)
        if kb.is_pressed('z'):
            seth(225)
            fd(10)
        if kb.is_pressed('x'):
            seth(315)
            fd(10)
        if kb.is_pressed('w'):
            seth(90)
            fd(10)
        if kb.is_pressed('a'):
            seth(180)
            fd(10)
        if kb.is_pressed('s'):
            seth(270)
            fd(10)
        if kb.is_pressed('d'):
            seth(0)
            fd(10)
        if kb.is_pressed('o'):
            penup()
        if kb.is_pressed('i'):
            pendown()
        if kb.is_pressed('g'):
            break
        

pensize(3)
pencolor('red')
speed(2)
colors = ['yellow', 'gold', 'orange', 'red', 'maroon', 'violet', 'magenta', 'purple', 'navy', 'blue', 'skyblue', 'cyan', 'turquoise', 'lightgreen', 'green', 'darkgreen', 'chocolate', 'brown', 'black', 'gray']
# colorBomb()
# rainbow()
# spiralBomb(5)
# polygon(20,50)
# penup()
# goto(0,-100)
# pendown()
# print(len(colors))
# snowFlake(30)

drawOnCommand()
exitonclick()
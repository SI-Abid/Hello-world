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
        x , y = pos()
        if x>100:
            if y>100:
                pencolor('blue')
            elif y<-100:
                pencolor('maroon')
            else:
                pencolor('red')
        elif x<-100:
            if y>100:
                pencolor('green')
            elif y<-100:
                pencolor('pink')
            else:
                pencolor('orange')
        else:
            if y>100:
                pencolor('magenta')
            elif y<-100:
                pencolor('cyan')
            else:
                pencolor('chocolate')

        if kb.is_pressed('7'):
            seth(135)
            fd(5)
        if kb.is_pressed('9'):
            seth(45)
            fd(5)
        if kb.is_pressed('1'):
            seth(225)
            fd(5)
        if kb.is_pressed('3'):
            seth(315)
            fd(5)
        if kb.is_pressed('8'):
            seth(90)
            fd(5)
        if kb.is_pressed('4'):
            seth(180)
            fd(5)
        if kb.is_pressed('2'):
            seth(270)
            fd(5)
        if kb.is_pressed('6'):
            seth(0)
            fd(5)
        if kb.is_pressed('o'):
            penup()
        if kb.is_pressed('i'):
            pendown()
        if kb.is_pressed('esc'):
            break
        print(pos());
        

pensize(2)
pencolor('red')
speed(0)
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
# exitonclick()
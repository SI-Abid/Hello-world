# install pyautogui: pip3 install pyautogui
# install tkinter: pip3 install tkinter
# install scrot: sudo apt-get install scrot
from os import system
import pyautogui as pag
import clipboard as cb
import time

        
def getDetails(s:str)->list:
    line = list(map(str.strip, s.split(':')))
    id=line[1].strip()[0:10]
    semester=line[2][0:len(line[2])-4]
    cgpa=line[3][0:len(line[3])-5]
    grade=line[4][0:len(line[4])-16]
    credit=line[5][0:len(line[5])-4]
    name=line[6][0:len(line[6])-7]
    program=line[7][0:len(line[7])-10]
    department=line[8]
    return [id, semester, cgpa, grade, credit, name, program, department]
        
def getResult():
    f = open('ids.txt', 'w')
    f.write(','.join(keys))
    for id in ids:
        pag.moveTo(pos1)
        pag.click()
        pag.hotkey('ctrl', 'a')
        pag.typewrite(id, interval=0.1)
        time.sleep(0.2)
        pag.moveTo(pos2)
        pag.click()
        time.sleep(15)
        pag.moveTo(pos4)
        pag.dragTo(pos5, duration=0.5)
        pag.hotkey('ctrl', 'c')
        time.sleep(0.2)
        text=getDetails(cb.paste())
        # list to string
        text = ','.join(text)
        f.write(text+'\n')
        time.sleep(0.2)
        
pos1 = (330, 418)
pos2 = (774, 408)
pos3 = (274, 502)
pos4 = (774, 450)
pos5 = (774, 600)

ids = [str(i) for i in range(2012020001, 2012020401)]
# 10,l-4,l-5,l-16,l-4,l-7,l-10
s = "Student ID : 2012020207Semester : Spring-2020CGPA : 3.48Grade : B+Credit Completed : 64.5Name : Saiham Islam AbidProgram : B.Sc. (Honours) in Computer Science & EngineeringDepartment : Computer Science & Engineering"
keys=['id', 'semester', 'cgpa', 'grade', 'credit', 'name', 'program', 'department']
vals = getDetails(s)

time.sleep(5)
# print(pag.position())
pag.hotkey('alt', 'tab')
getResult()
system("clear")
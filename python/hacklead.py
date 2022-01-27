# install pyautogui: pip3 install pyautogui
# install tkinter: pip3 install tkinter
# install scrot: sudo apt-get install scrot
import pyautogui as pag
import time

pos1 = (330, 418)
pos2 = (774, 408)
# time.sleep(5)
# print(pag.position())
pag.hotkey('alt', 'tab')
ids = [str(i) for i in range(2012020201, 2012020250)]
for id in ids:
    pag.moveTo(pos1)
    pag.click()
    pag.hotkey('ctrl', 'a')
    pag.typewrite(id, interval=0.1)
    time.sleep(0.5)
    pag.moveTo(pos2)
    pag.click()
    time.sleep(15)
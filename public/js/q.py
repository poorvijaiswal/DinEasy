import random as rd
import pyautogui as pg

ch=["gdhi","bevkuf","nalli"]

for i in range(1,50):
    a=rd.choice(ch)
    pg.write("tu ek number ka "+a)
    pg.press("enter")
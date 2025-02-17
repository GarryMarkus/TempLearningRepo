from tkinter import StringVar, Tk, Entry,Button

def btnclick(number):
    global val
    val=val+str(number)
    data.set(val)

def btnclear():
    global val
    val=""
    data.set(val)
def btneval():
        global val
        result = str(eval(val))
        data.set(result)  
        val = result  

win = Tk()
win.title("MY CALCULATOR")
win.geometry('400x400')  
data=StringVar()
val=""

display=Entry(win,textvariable=data,bd=29,bg="powder blue",font=("arial",20))
display.grid(row=0,columnspan=4)

btn7=Button(win,text="7",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclick(7))
btn7.grid(row=1,column=0)
btn8=Button(win,text="8",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclick(8))
btn8.grid(row=1,column=1)
btn9=Button(win,text="9",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclick(9))
btn9.grid(row=1,column=2)
btn_add=Button(win,text="+",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclick("+"))
btn_add.grid(row=1,column=3)

btn4=Button(win,text="4",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclick(4))
btn4.grid(row=2,column=0)
btn5=Button(win,text="5",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclick(5))
btn5.grid(row=2,column=1)
btn6=Button(win,text="6",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclick(6))
btn6.grid(row=2,column=2)
btn_sub=Button(win,text="-",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclick("-"))
btn_sub.grid(row=2,column=3)

btn1=Button(win,text="1",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclick(1))
btn1.grid(row=3,column=0)
btn2=Button(win,text="2",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclick(2))
btn2.grid(row=3,column=1)
btn3=Button(win,text="3",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclick(3))
btn3.grid(row=3,column=2)
btn_mul=Button(win,text="*",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclick("*"))
btn_mul.grid(row=3,column=3)

btnc=Button(win,text="C",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclear())
btnc.grid(row=4,column=0)
btn0=Button(win,text="0",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclick(0))
btn0.grid(row=4,column=1)
btne=Button(win,text="=",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btneval())
btne.grid(row=4,column=2)
btn_div=Button(win,text="/",font=("arial",12,"bold"),bd=12,height=2,width=6,command=lambda:btnclick("/"))
btn_div.grid(row=4,column=3)
win.mainloop()
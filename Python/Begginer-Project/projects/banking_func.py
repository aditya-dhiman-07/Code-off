# from banking_prog import *
amt = int(input("Enter base amount :"))
def deposit(amount):
    global amt
    if amount>0:
        amt += amount
    else:
        print("Invalid!! Input amount!! U GAREEB !!")
    
    return amt

def withdraw(amount):
    global amt
    if (amt>=amount):
        amt-=amount
    else:
        print("Invalid!! Input amount!! U GAREEB !!")
    return amt

def chk_bal():
    print(f"This is your current balance : ${amt}")


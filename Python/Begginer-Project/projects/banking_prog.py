from project_functions.banking_func import *
def main():
    isrunning =True
    while isrunning :
        print("""
        choice 1 : Deposit
        choice 2 : Withdraw
        choice 3 : Check Balance
        choice 4 : Exit
        """)
        choice = int(input("Enter the choice (1/2/3/4) :"))
        match choice:
            case 1:
                amt = int(input("Enter the amount: "))
                deposit(amt)
            case 2:
                amt = int(input("Enter the amount: "))
                withdraw(amt)
            case 3:
                chk_bal()
            case 4:
                isrunning = False
            case _:
                print("Enter a valid input")
if (__name__) == '__main__':
    main()
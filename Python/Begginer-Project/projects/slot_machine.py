from project_functions.slot_func import *

def main():
    print("***************************")
    print("Welcome to ----->>>")
    print("Python Slot Machine")
    print("Symbols : 🍰 🍒 ⭐ 🍋 🔔")
    print("***************************")
    avail_bal = 100
    while avail_bal>0:
        print(f"Your current balance is ${avail_bal}")
        bet = input("Enter a bet amount :")
        if not bet.isdigit():
            print("Enter a valid amount. ")
            continue
        bet = int(bet)
        if bet>avail_bal:
            print("Insufficent Balance !! ")
            continue
        if bet<=0:
            print("Please enter a number greater than zero!!")
            continue
        avail_bal -= bet
        row = spin_row()
        print("Spinning...")
        print_row(row)
        payout = get_payout(row,bet)
        if payout>0:
            print(f"You won ${payout}") 
        else :
            print("You Lost!!\nBetter luck next time...")
        avail_bal +=payout
        if avail_bal>0:
            cont_ = input("Would You like to continue(Y/n) :")
            if cont_ != 'Y'or cont_ !='y':
                exit

if __name__ == '__main__':
    main()
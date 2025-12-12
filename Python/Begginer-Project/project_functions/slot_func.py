import random
def spin_row():
    symbols = ['🍰','🍒','⭐','🍋','🔔']
    return [random.choice(symbols) for _ in range(3)]
def print_row(row):
    print("*************")
    print(" | ".join(row))
    print("*************")
def get_payout(row,bet):
    if row[0]==row[1]==row[2]:
        if row[0] == '🍰':
            print("🎊🍾🎉JACKPOT🎊🍾🎉")
            return bet*10
        if row[0] == '🍒':
            print("**Amazing!!**")
            return bet*8
        if row[0] == '⭐':
            return bet*4
        if row[0] == '🍋':
            return bet*3
        if row[0] == '🔔':
            return bet*2
    return 0
from IPython.display import clear_output
from sys import exit


in_val = [" ", " ", " ", " ", " ", " ", " ", " ", " "]
winner_tab = [0, 0, 0, 0, 0, 0, 0, 0, 0]
pos_set = set()


def welcome_txt():
    print("Welcome to Tik Tok Toe\n Press q to quit anytime")
    player1_choice = input("Player 1 Choose your Symbol x or o ")
    while player1_choice not in ('x', 'o', 'X', 'O'):
        print("Choose 'X' or 'O' ")
        player1_choice = input("Player 1 Choose your Symbol x or o ")
    if player1_choice is 'x':
        player2_choice = 'o'
    else:
        player2_choice = 'x'
    print("-----------------------------------------------------------------------------------------------------------")
    print(f"Player 1 : {player1_choice} \nPlayer 2 : {player2_choice}")
    return (player1_choice, player2_choice)


def print_pattern(val):
    clear_output()
    print(f"{val[0]}|{val[1]}|{val[2]}\n{val[3]}|{val[4]}|{val[5]}\n{val[6]}|{val[7]}|{val[8]}")


def valid_pos(pos):
    if pos not in pos_set:
        pos_set.add(pos)
        return True
    else:
        return False


def user_input(value):
    try:
        pos = int(input("Input position (ex: 8) : "))
    except:
        pos = int(input("Wrong Input position, Enter Again (ex: 8) : "))
    while pos not in range(9):
        try:
            pos = int(input("Wrong Input position, Enter Again (ex: 8) : "))
        except:
            pos = int(input("Wrong Input position, Enter Again (ex: 8) : "))
    if not valid_pos(pos):
        try:
            pos = int(input("Input position already used, Enter Again (ex: 8) : "))
        except:
            pos = int(input("Input position already used, Enter Again (ex: 8) : "))
    in_val[pos] = value
    return pos


def winner(winner_table):
    sumr1 = 0
    sumr2 = 0
    sumr3 = 0
    sumc1 = 0
    sumc2 = 0
    sumc3 = 0
    sumd1 = 0
    sumd2 = 0

    for i in range(0, 3):
        sumr1 += winner_table[i]

    for i in range(3, 6):
        sumr2 += winner_table[i]

    for i in range(6, 9):
        sumr3 += winner_table[i]

    for i in range(0, 7, 3):
        sumc1 += winner_table[i]

    for i in range(1, 8, 3):
        sumc2 += winner_table[i]

    for i in range(2, 9, 3):
        sumc3 += winner_table[i]

    for i in range(0, 9, 4):
        sumd1 += winner_table[i]

    for i in range(2, 7, 2):
        sumd2 += winner_table[i]

    if sumr1 == -3 or sumr2 == -3 or sumr3 == -3 or sumc1 == -3 or sumc2 == -3 or sumc3 == -3 or sumd1 == -3 or sumd2 == -3:
        print("Player 1 Won")
        exit(1)

    elif sumr1 == 6 or sumr2 == 6 or sumr3 == 6 or sumc1 == 6 or sumc2 == 6 or sumc3 == 6 or sumd1 == 6 or sumd2 == 6:
        print("Player 2 Won")
        exit(2)


p1_choice, p2_choice = welcome_txt()
j = 0
while j in range(9):
    print("Player 1", end=" ")
    position = user_input(p1_choice)
    winner_tab[position] = -1
    print_pattern(in_val)
    winner(winner_tab)
    j += 1

    if j == 9:
        break

    print("Player 2", end=" ")
    position = user_input(p2_choice)
    winner_tab[position] = 2
    print_pattern(in_val)
    winner(winner_tab)
    j += 1
print("draw")

def who_wins(p1,p2):
    if [p1,p2] in [[2,1],[3,2],[1,3]]:return "YOU WIN!!"
    elif [p2,p1] in [[2,1],[3,2],[1,3]]:return "COMPUTER WINS!"
    elif p1==p2:return "DRAW"


#5
def game(score1,score2):
    import random
    print("""\t\tIT IS A CLASSIC GAME OF ROCK PAPER AND SCISSORS
    		RULES:
    		\t1.The game is played between you and computer.
    		\tboth have to choose a number from the list of number i.e. 1,2,3
    		\t2.The choices are as follows:
    		\t\t1= 'ROCK'\t2= 'PAPER'\t3= 'SCISSORS'
    		\t3.The computer will declare the winner and the score is added to scoreboard.
    		\t4.Whenever the computer ask for input like 'YES' or 'NO' type complete yes or no \n""")
    play=input("Do you want to start the game?\n").upper()
    my_values={1:"ROCK",2:"PAPER",3:"SICSSORS"}
    while play=="YES":
        player = int(input("Make your choice\n"))
        while not player in [1, 2, 3]: player = int(input("You Have Entered The Wrong Choice\n\tTry Again!! From The Numbers 1 2 3\n"))
        computer=random.randint(1,3)
        winner=who_wins(player,computer)
        if winner[0]=="Y":score1+=1
        elif winner[0]=="C":score2+=1
        
        print(f"Your choice:{my_values(player)}\nComputer's choice: {my_values(computer)}")
        print(winner)
        play=input("Do you want to play again\n").upper()
    else:print(f"\tTHE FINAL SCORES ARE AS FOLLOWS:\n\tYOU: {score1}||COMPUTER: {score2}\n\n\tHOPE YOU LIKED THE GAME!!\nTHANKYOU!!")


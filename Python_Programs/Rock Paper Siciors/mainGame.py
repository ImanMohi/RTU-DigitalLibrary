def win_check(p1,p2):
	return not p1==p2


def who_wins(p1,p2):
	if [p1,p2] in [[2,1],[3,2],[1,3]]:
		return "YOU WIN!!"
	else:return "COMPUTER WINS!"

def player_input(player):
    player= int(input("Make your choice\n"))
    while player not in [1,2,3]:
    	print("You Have Entered The Wrong Choice\n\tTry Again!! From The Numbers 1 2 3\n")
    	player=int(input())


def computer_input(computer):
    #random library is imported in the main game function
    computer=random.randint(1,3)  


def game(scr1,scr2):

	#importing random library for computer input
	import random
	#introduce to game and explain the rules
	

	print(""\t\tIT IS A CLASSIC GAME OF ROCK PAPER AND SCISSORS\nRULES:\n\t1.The game is played between you and computer.\n\tboth have to choose a number from the list of number i.e. 1,2,3\n\t2.The choices are as follows:\n\n\t1= 'ROCK'\t2= 'PAPER'\t3= 'SCISSORS'\n\t3.The computer will declare the winner and the score is added to scoreboard.\n\n\n"")
	play=input("Do you want to play??\n")
    player="user"
    computer="null"
    while play=="YES":
    	while not win_check(player,computer):
    		player_input(player)
    		computer_input(computer)
    	winner=who_wins(player,computer)
    	if winner=="YOU WIN!!":
    		scr1+=1
    		print(winner)
        else:
        	scr2+=1
        	print(winner)
        play=input("Do you Want to play again?")
    else:print("Thankyou!!")
    
#scores of computer and user
scr1=0
scr2=0
gamePlay=input("DOU YOU WANT TO PLAY ROCK PAPER SCISSORS?\nENTER 'y' FOR 'YES' AND 'n' FOR 'NO'")
if gamePlay=="y":
	game(scr1,scr2)
	print(f"\tTHE FINAL SCORES ARE AS FOLLOWS:\n\tYOU:-{scr1}||COMPUTER:-{scR2}\n\n\tHOPE YOU LIKED THE GAME!!")
else:
	print("OK THANKYOU :)")
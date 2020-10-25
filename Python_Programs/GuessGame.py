print('##########################')
print("Welcome to the guess game")
print("You have 3 chances to guess my number btw 1 to 25")

import random
Random = random.randint(1, 20)
# print(random.randrange(1,25,1))


for GUESS in range(1, 4):
    guess = int(input('Guess my secret no '))

    if guess - Random < 0:
        if abs(guess - Random) > 3:  # we dont know how to exclude these values:
            print("Oww.,.youre thinking too small")
        else:
            print('oww...,you made me laugh with ur small thinking haha', '\n have another try')


    elif guess - Random > 0:
        if guess - Random > 3:  # we dont know how to exclude these values:
            print("Oww.,.youre thinking too big")
        else:
            print("oww...,you're very close", '\n have another try')

    else:
        print('You guesed it right in', str(GUESS))

print('Haha poor boy')
print('The number was ', Random)


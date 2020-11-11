def reverse():
    n=input('Enter String:')
    reverse=''
    for ch in n:
        reverse=ch+reverse
    print('\nInputted String:',n)
    print('Reversed String:',reverse)

def palindrome():
    n=input('Enter String:')
    reverse=''
    for ch in n:
        reverse=ch+reverse
    if reverse==n:
        print('\nIt is a Palindromic String')
    else:
        print('\nNot a Palindromic String')

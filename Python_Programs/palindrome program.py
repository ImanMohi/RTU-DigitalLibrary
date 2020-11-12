#Program to check if string is palindrome or not
while True:
    str1 = input("Enter a string: ")
    str2 = ""
    n = len(str1)
    for i in range(-1,-n-1,-1):
        pos = str1[i]
        str2 = str2 + pos
    print(str2)
    print()
    if str2 == str1:
        print("Entered string is a palindrome")
    else:
        print("It is not a palindrome")

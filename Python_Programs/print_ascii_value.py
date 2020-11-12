#program to print ASCII  VALUE of character

#ord() : converts the string of length 1, return an integer representing the ascii code

def asc():
    c = input("Enter character to produce ascii value : ")
    print("The Ascii value of ",c,"is :",ord(c))

asc()
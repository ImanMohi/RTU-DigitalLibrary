a = int(input("Enter First Number:"))
b = int(input("Enter Second Number:"))
print(" 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Modulus")
ch = input("Enter Your Choice:")
if ch == '1':
    c = str(a+b)
    print("Addition is : " + c)
elif ch == '2':
    c = str(a - b)
    print("Subtraction is : " + c)
elif ch == '3':
    c = str(a * b)
    print("Multiplication is: " + c)
elif ch == '4':
    c = str(a / b)
    print("Division is: " + c)
elif ch == '5':
    c = str(a % b)
    print("Modulus is: " + c)
else:
    print("Invalid Choice.")

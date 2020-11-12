# take two numbers from user
num1=int(input("enter 1st number: ")) 
num2=int(input("enter 2nd number: "))
greater=max(num1,num2) # taking the largest number
for i in range(greater,num1*num2+1): # iterating from greater to the product of num1 and num2
    if i % num1 == 0 and i % num2 == 0:
        lcm=i
        break
print(f"Least Common Multiple of {num1} and {num2} is",lcm)

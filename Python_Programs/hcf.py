def compute_hcf(x, y):
    if x > y:
        smaller = y
    else:
        smaller = x
    for i in range(1, smaller+1):
        if((x % i == 0) and (y % i == 0)):
            hcf = i
    return hcf

def main():
    num1 = int(input("Enter first number : "))
    num2 = int(input("Enter Second number : "))
    h = compute_hcf(num1,num2)
    print("The H.C.F. is : {}".format(h))

main()
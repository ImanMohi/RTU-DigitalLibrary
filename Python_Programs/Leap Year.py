a = input("Enter year: ")
try:
    year = int(a)
    if year<=0:
        raise Exception("Year can not be 0 or less than 0")
    if (year % 4 == 0) and (year % 100 != 0) or (year % 400 == 0):
        print("Leap Year")
    else:
        print("Not a leap year")
except ValueError:
    print("Please Enter Year in digit")





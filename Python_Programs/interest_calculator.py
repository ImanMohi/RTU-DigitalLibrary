def si(p,t,r):
    isi = (p*t*r)/100
    print("The Simple Interest is : {:.2f}".format(isi))

def ci(p,t,r):

    amt = p*(pow((1+r/100),t))
    ici = amt - p
    print("Compound interest is : {:.2f}".format(ici))

def main():
    ch = input("Enter S to calculate Simple Interest and C to calculate Compound Interest :")
    p = float(input("Enter principle amount : "))
    t = float(input("Enter time : "))
    r = float(input("Enter rate : "))
    if ch == "S" or ch == "s":
        si(p,t,r)
    elif ch == "C" or ch == "c":
        ci(p,t,r)

main()

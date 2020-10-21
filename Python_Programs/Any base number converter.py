#this is a programme to Convert between number bases
# developed by - savindu Bandara

print("Any base number convertor By : Savindu Bandara {2017 A/L}")
print("All contents of this programme is Copyrighted Savindu Bandara")
print("\n")

print("Press 1 to convert decimal to binary ")
print("Press 2 to convert decimal to octal")
print("Press 3 to convert decimal to Hexa-decimal")
print("Press 4 to convert binary to Decimal")
print("Press 5 to convert Binary to octal")
print("Press 6 to convert octal to binary")
print("Press 7 to convert octal to decimal ")
print("press 8 to convert binary to hexa-decimal")
print("Press 9 to convert hexa-decimal to Binary")
print("Press 10 to convert octal to hexa decimal")
print("Press 11 to convert hexa-decimal to octal")
print("Press 12 to convert Hexa-decimal to decimal")
print("\n")

inp= int(input("Enter Your Choise :")) #input from user

if (inp==1):
    dec=int(input("Enter the decimal value :"))
    out=bin(dec)
    print("The binary value for entered value is :" +out)
else:
    if (inp==2):
        dec=int(input("Enter the decimal value :"))
        out=oct(dec)
        print("the octal value for entered value is :"+out)
    else:
        if (inp==3):
            dec=int(input("Enter the decimal value :"))
            out= hex(dec)
            print("the hexa-decimal value for entered value is :"+out)
        else:
            if (inp==4):
                dec=input("Enter the binary value :")
                out =int(dec, 2)
                print("the Binary value for entered value is :")
                print(out)
            else:
                if (inp==5):
                    dec=input("Enter the binary value :")
                    out= int(dec, 2)
                    final= oct(out)
                    print("The Octal value for entered value is :")
                    print(final)
                else:
                    if (inp==6):
                        dec= input("Enter the octal value :")
                        octal= int(dec, 8)
                        out= bin (octal)
                        print("The Binary value for entered value is :"+out)
                    else:
                        if (inp==7):
                            dec=input("Enter the octal value :")
                            decimal= int(dec, 8)
                            print("The Decimal value for entered value is :")
                            print(decimal)
                        else:
                            if(inp==8):
                                dec=input("Enter the Binary Value :")
                                out =int(dec, 2)
                                final= hex(out)
                                print("The hexa-decimal value for entered value is :")
                                print(final)
                            else:
                                if (inp==9):
                                    dec=input("Enter the hexa decimal value :")
                                    out= int(dec, 16)
                                    final= bin(out)
                                    print("The binary value for entered value is :")
                                    print(final)
                                else:
                                    if (inp==10):
                                        dec=input("Enter the octal value :")
                                        octal=int(dec, 8)
                                        out= hex(octal)
                                        print("The hexa-decimal value for entered value is :"+" "+out)
                                    else:
                                        if (inp==11):
                                            dec=input("Enter the hexa decimal value :")
                                            out= int(dec, 16)
                                            final= oct(out)
                                            print("The octal value for entered value is"+" "+final)
                                        else:
                                            if (inp==12):
                                                dec=input("Enter the hexa decimal value :")
                                                out= int(dec, 16)
                                                print("The decimal value for entered value is :")
                                                print(out)
                                                

#End of Programme                               
                                    
                                
                    




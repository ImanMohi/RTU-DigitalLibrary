def factorial(n): #-----------------------------------------------------------------------------------
    if n==1:
        return 1
    else:
        return n*fact(n-1)

def palindrome(s):
    if len(s)<=1:
        return 1
    elif s[0]==s[-1]:
        return palindrome(s[1:-1])
    else:
        return 0

def hcf(a,b):
    if a%b==0:
        return b
    else:
        return hcf(b,a%b)
    
def generateFibonacci(n,f1,f2): #-------------------------------------------------------------------
    if n>0:
        print(f1)
        gen(n-1,f2,f1+f2)

def nthFibonacci(n): #----------------------------------------------------------------------------------
    if n<=1:
        return n
    else:
        return nth(n-1)+nth(n-2)

def checkForFibonacci(n,f1,f2): #-------------------------------------------------------------------------
    if n==1 or n==2 or n==f1+f2:
        return 1
    elif f1+f2<n:
        return check(n,f2,f1+f2)
    else:
        return 0

def binarySearch(a,lb,ub,item): #-------------------------------------------------------------------------------
    if not lb>ub:
        return -1
    mid=(lb+ub)//2
    if a[mid]>item:
        return binary(a,lb,a[mid],item)
    elif a[mid]<item:
        return binary(a,a[mid]+1,ub,item)
    else:
        return mid

def linearSearch(a,item): #--------------------------------------------------------------------------------------------
    if item==a[0]:
        return 1
    elif len(a)>0:
        return linear(a[1:],item)
    else:
        return 0

def count(a): #-------------------------------------------------------------------------
    if len(a)==1:
        return a[0]
    else:
        return a[0]+count(a[1:])

def lcm(a,b):
    global m
    m+=b
    if m%a==0:
        return m
    else:
        return lcm(a,b)




from math import gcd

n=int(input('Enter n:'))
#s=input('Enter S:')
#a=int(input('Enter a:'))
#b=int(input('Enter b:'))
f1=f2=1

#print(factorial(n))
#print(palindrome(s))
#print(hcf(a,b))
#print(gcd(a,b))
gen(n,f1,f2)
print(nth(n))

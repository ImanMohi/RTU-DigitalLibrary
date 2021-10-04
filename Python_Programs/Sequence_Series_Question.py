def ex():
    n=int(input('Enter n:'))
    x=float(input('Enter x:'))
    print('\n')
    s,p,f=0,1,1
    for k in range(1,n+1):
        p*=x
        f*=k
        s+=p/f
    print(s)
    print('\n')

def minusex():
    n=int(input('Enter n:'))
    x=float(input('Enter x:'))
    print('\n')
    s,p,f=0,1,1
    for k in range(1,n+1):
        p*=-1*x
        f*=k
        s+=p/f
    print(s)
    print('\n')

def sinx():
    n=int(input('Enter n:'))
    x=float(input('Enter x:'))
    print('\n')
    s,p,f=0,1,1
    for k in range(2,2*n+1,2):
        p*=-1*x*x
        f*=k*(k-1)
        s+=p/f
    print(s)
    print('\n')

def cosx():    
    n=int(input('Enter n:'))
    x=float(input('Enter x:'))
    print('\n')
    s,p,f=x,x,1
    for k in range(3,2*n,2):
        p*=-1*x*x
        f*=k*(k-1)
        s+=p/f
    print(s)
    print('\n')
    
while True:
    print('Select 1 to find e^x\n'
          'Select 2 to find e^-x\n'
          'Select 3 to find sin(x)\n'
          'Select 4 to find cos(x)\n'
          'Select 5 to exit menu\n')

    c=input('Enter Option:')

    if c>'0' and c<'6':

        if c=='1':
            ex()

        if c=='2':
            minusex()

        if c=='3':
            sinx()

        if c=='4':
            cosx()

        if c=='5':
            break
    else:
        print('\nOut Of Options\n \a')

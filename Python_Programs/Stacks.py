def push(a):
    global top
    if top==MAX-1:
        print('Stack Overflow!\n')
    else:
        top+=1
        a[top]=int(input('Enter Integer:'))
        print('\nAdded Successfully!\n')

def pop(a):
    global top
    if top==-1:
        print('Stack Underflow!\n')
    else:
        print(a[top],'Popped')
        a[top]=None
        top-=1

def display(a):
    if top==-1:
        print('Stack Empty!\n')
    else:
        for k in range(top,-1,-1):
            print(a[k],end=' ')
        print()
#-------------Main Code---------------

MAX=5
top=-1
a=MAX*[None]
while True:
    print('1.Push\n'
          '2.Pop\n'
          '3.Display\n'
          '0.Exit\n')
    c=input('Enter Choice:')
    print()
    if c in '1230':
        if c=='1':
            push(a)
            print()
        elif c=='2':
            pop(a)
            print()
        elif c=='3':
            display(a)
            print()
        else:
            break
    else:
        print('Out Of Options!\n')
        
        

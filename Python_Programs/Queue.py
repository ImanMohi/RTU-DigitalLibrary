MAX=5
queue=MAX*[None]
front=rear=-1

def insert(queue):
    global front,rear
    if front==0 and rear==MAX-1 or front==rear+1:
        print('Queue Overflow!')
    else:
        if front==-1:
            front=rear=0
        else:
            rear=(rear+1)%MAX
        queue[rear]=int(input('Enter n:'))
        print('\nAdded Successfully!')

def delete(queue):
    global front,rear
    if front==-1:
        print('Queue Underflow!')
    else:
        print(queue[front],'Deleted From The Queue!')
        if front==rear:                         #when f=2 and r=2 => queue becomes empty
            front=rear=-1
        else:
            front=(front+1)%MAX


def display(queue):
    if front==-1:
        print('Queue Empty!')
    else:
        last=rear
        if front>rear:
            last+=MAX
        for k in range(front,last+1):
            print(queue[k%MAX],end=' ')         #queue[k%MAX] prevents list out of range
        print()
        
while True:
    print('Menu:\n'
          '1.Insert\n'
          '2.Delete\n'
          '3.Display\n'
          '0.Quit\n')
    c=input('Enter Option:')
    print()
    if c in ['0','1','2','3','4']:
        if c=='1':
            insert(queue)
            print()
        if c=='2':
            delete(queue)
            print()
        if c=='3':
            display(queue)
            print()
        if c=='0':
            break
        if c=='4':
            print()
            for k in queue:
                print(k, end=' ')
            print('\n')
    else:
        print('\nOut Of Options!\n')

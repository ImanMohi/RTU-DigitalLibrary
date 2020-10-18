import time
l1=[0,0,1,1]
l2=[0,1,0,1]
orgate=[]
andgate=[]
xorgate=[]

def and_gate():
    for i in range(len(l1)):
        count=0
        if l1[i]==1 and l2[i]==1:
            count=0
            time.sleep(1)
            print('---->',count)
            andgate.append(count)

        else:
            count+=1
            time.sleep(1)
            print('---->',count)
            andgate.append(count)

def or_gate():
    for i in range(len(l1)):
        count=0
        if l1[i]==1:
            count+=1
            time.sleep(1)
            print('---->',count)
            orgate.append(count)
    
        elif l2[i]==1:
            count+=1
            time.sleep(1)
            print('---->',count)
            orgate.append(count)

        else:
            count=0
            time.sleep(1)
            print('---->',count)
            orgate.append(count)

def xor_gate():
    for i in range(len(l1)):
        count=0
        if l1[i]!=l2[i]:
            count+=1
            time.sleep(1)
            print('---->',count)
            xorgate.append(count)
        else:
            count=0
            time.sleep(1)
            print('---->',count)
            xorgate.append(count)

print('                               LOGIC GATES                          ')
print('Or Gate: ',orgate)
or_gate()
print('And Gate: ',andgate)
and_gate()
print('Xor Gate: ',xorgate)
xor_gate()

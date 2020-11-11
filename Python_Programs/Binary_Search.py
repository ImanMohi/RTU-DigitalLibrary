a=6*[0]
for k in range(6):
    a[k]=int(input('Enter n: '))
a.sort()
for j in range(6):
    print(a[j])

def binsearch(a,f,l,item):
    if not f<l:
        return -1
    mid=(f+l)//2
    if a[mid]<item:
        return binsearch(a,mid+1,l,item)
    elif a[mid]>item:
        return binsearch(a,f,mid,item)
    else:
        return mid
while True:
    
    item=int(input('Enter item:'))
    i=binsearch(a,0,len(a),item)

    if i<0:
        print('Not Found')
    else:
        print('Found at',i)

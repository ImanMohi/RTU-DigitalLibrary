n=int(input())
for i in range(n):
    n=n-i
    p='Patlu'
    if n<=0:
        print(p)
        break
    
    n=n-i*2
    p='Motu'
    if n<=0:
        print(p)
        break
    
    

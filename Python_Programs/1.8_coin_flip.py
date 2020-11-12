import math

for i in range(int(input())):
    for j in range(int(input())):
        I, N, Q = map(int, input().split())
        if(N%2==0):
            print(N//2)
        else:
            if(I==1):
                if(Q==1):
                    print(math.floor(N/2))
                else:
                    print((N//2)+1)
            else:
                if(Q==1):
                    print((N//2)+1)
                else:
                    print(math.floor(N/2))
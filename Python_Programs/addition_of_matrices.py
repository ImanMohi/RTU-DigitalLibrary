def add_matrix():
    if r1==r2 and c1==c2:
        print("Addition Matrix of Given matrices is:")
        for i in range(r1):
            for j in range(c1):
                print(m1[i][j]+m2[i][j], end=" ")
            print()
    else:
        print("Error! Can't Add them!!")

r1=int(input("Enter no of rows in the matrix 1: "))
c1=int(input("Enter no of columns in the matrix 1: "))
m1=[[int(input("Enter element: ")) for j in range(c1)] for i in range(r1)]
for i in range(r1):
    for j in range(c1):
        print(m1[i][j], end=" ")
    print()

        
r2=int(input("\nEnter no of rows in the matrix 2: "))
c2=int(input("Enter no of columns in the matrix 2: "))
m2=[[int(input("Enter element: ")) for j in range(c2)] for i in range(r2)]

for i in range(r2):
    for j in range(c2):
        print(m2[i][j], end=" ")
    print()
add_matrix()

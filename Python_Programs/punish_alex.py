num = int(input())


for i in range(num):
    values = list(map(int, input().split()))
    steps = values[0]
    punish = values[1]
    destination = 0
    count = 0
    a = 0
    flag = 0
    if(punish < steps):
        destination = punish
        print(destination)
    elif(punish == steps):
        destination = steps
        print(destination)
    elif(punish > steps):
        destination = steps
        count = steps
        remain = punish - steps
        exact = remain//(steps-1)
        rem = remain % (steps-1)

        for i in range(exact):
            if(flag==0):
                destination = destination - (steps-1)
                count = count + (steps-1)
                flag=1
            elif(flag==1):
                destination = destination + (steps-1)
                count = count + (steps-1)
                flag = 0
            else:
                print('flag error')

        reamin2 = punish - count
        # print(destination)
        # print(reamin2)

        if(flag==0):
            destination = destination - reamin2
        elif(flag==1):
            destination = destination + reamin2

        # if(flag==0):
        #     while(count!=punish):
        #         destination = destination - 1
        #         count = count + 1
        # elif(flag==1):
        #     while(count!=punish):
        #         destination = destination + 1
        #         count = count + 1
        # else:
        #     print('flag error')

        print(destination)

        




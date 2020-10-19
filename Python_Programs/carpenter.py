num = int(input())

for i in range(num):
    values = list(map(int, input().split()))
    needed = values[0]
    num_logs = values[1]
    logs = list(map(int, input().split()))
    bundle = list(map(int, input().split()))

    avail = []
    count = 0

    for j in range(len(logs)):
        avail.append(logs[j]*bundle[j])

    # for k in range(len(logs)):
    #     for l in bundle:
    #         k = k + k
    #         if(k == needed):
    #             count = count + 1

    for m in logs:
        d = 0
        for n in bundle[d]:
            temp = m
            temp = temp + temp
            if(temp==needed):
                count = count + 1
                # print(f"m: {m} ")
        d = d + 1 




    print(count)
    print(avail)

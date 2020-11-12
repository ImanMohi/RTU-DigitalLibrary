for _ in range(int(input())):
    value = input()
    if(len(value)%2==0):
        first_part = value[:len(value)//2]
        second_part = value[(len(value)//2):]
    else:
        first_part = value[:len(value)//2]
        second_part = value[(len(value)//2)+1:]

    count = 0

    for i in first_part:
        first = first_part.count(i)
        second = second_part.count(i)
        if(first==second):
            count += 1
    
    if(count==len(first_part)):
        print('YES')
    else:
        print('NO')    
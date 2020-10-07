fhand = open('C:/Users/Spartan/Desktop/romeo.txt')  # file address which you want to open
count = dict()
for line in fhand:
    words = line.split()
    for word in words:
        count[word] = count.get(word, 0)+1

lst = list()
for key, val in count.items():
    newtup = (val,key)
    lst.append(newtup)
lst = sorted(lst, reverse=True)

for val, key in lst[:10]:
    print(key, val)

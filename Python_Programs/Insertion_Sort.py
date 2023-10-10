from random import randint

def insertionSort(arr,n):
  for x in range(1,n):
    temp = arr[x]
    k = x-1
    while k >= 0 and temp < arr[k]:
      arr[k+1] = arr[k]
      k-=1
    arr[k+1]=temp
    
number = int(input("No. of elements:"))
arr = [randint(0,100) for k in range(number)]
insertionSort(arr,number)
print(arr)

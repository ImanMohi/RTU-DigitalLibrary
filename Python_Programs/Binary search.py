import math

def binarySearch(arr, target):
    left = 0
    right = len(arr)-1
    

    while(left<=right):
        mid = math.floor(left+(right-left)/2)
        if arr[mid]==target:
            return mid
        elif arr[mid]<target:
            left = mid + 1
        else:
            right = mid - 1
    return -1


arr = [1, 2, 2, 3, 5, 6] #sorted array
target = 5

result = binarySearch(arr, target)

if result!=-1:
    print("Element is at the index %d" %result)
else:
    print("Element not found")
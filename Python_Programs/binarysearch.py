def bin_search(arr, low, high, x): 
    if high >= low: 
  
        mid = (high + low) // 2
        if arr[mid] == x: 
            return mid 
        elif arr[mid] > x: 
            return bin_search(arr, low, mid - 1, x) 
        else: 
            return bin_search(arr, mid + 1, high, x) 
  
    else: 
        return -1
arr = [ 1, 3, 4, 10, 40 ] 
x = 5
res = bin_search(arr, 0, len(arr)-1, x) 
  
if res != -1: 
    print("Element is present at index", str(res)) 
else: 
    print("Element is not present in array") 

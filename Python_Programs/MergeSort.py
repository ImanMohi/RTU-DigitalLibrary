#Function to merge to subarrays of original array
def merge(a,low,m,high):
    a1,a2=a[low:m+1],a[m+1:high+1]
    i,j,k=0,0,low
    while(i<len(a1) and j < len(a2)):
        if(a1[i]<=a2[j]):
            a[k]=a1[i]
            i+=1
        else:
            a[k]=a2[j]
            j+=1
        k+=1
    while(i<len(a1)):
        a[k]=a1[i]
        i+=1
        k+=1
    while(j<len(a2)):
        a[k]=a2[j]
        j+=1
        k+=1
        
#low is left index and high is right index of the subarray to be sorted
def mergeSort(a,low,high):
    if(low<high):
        m=(low+high)//2  # (low+(high-low))//2 could be used to avoid overflow
        mergeSort(a,low,m)
        mergeSort(a,m+1,high)
        merge(a,low,m,high)

def main():
    a=list(map(int,input().split()))
    print("Before sorting:")
    print(*a)
    mergeSort(a,0,len(a)-1)
    print("After sorting:")
    print(*a)
main()
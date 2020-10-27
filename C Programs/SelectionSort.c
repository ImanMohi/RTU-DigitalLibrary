#include<stdio.h>
int main()
{
    int n;
    int arr[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        int temp=arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        printf(" ");
    }
    return 0;
}
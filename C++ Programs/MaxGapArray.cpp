/*This program will take any array as its input and then it will sort that array and then compare the difference between successive elements and print the largest difference as output*/

#include <iostream>
#include<stdlib.h>
using namespace std;


void insertionSort(int arr[], int n)
{
    int i, key, j;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int maxDiff(int arr[], int n)
{
    int tempDiff;
    int maxDiff=arr[1]-arr[0];
    int i;
    for(i=2; i<n; i++)
    {
        tempDiff=arr[i]-arr[i-1];
        if(tempDiff>maxDiff)
        {
            maxDiff=tempDiff;
        }
    }
    return maxDiff;
}
int main()
{
    int i,n, maxD=0;
    cout<<"\nEnter size of the array (must be greater than 2): ";
    cin>>n;
    int *arr=new int[n];
    cout<<"\nEnter the elements of the array\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
    maxD=maxDiff(arr, n);
    cout<<"\nMaximum Difference is "<<maxD<<endl;
    return 0;
}

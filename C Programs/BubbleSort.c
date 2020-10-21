// C program for implementation of Bubble sort 
#include <stdio.h> 
#include <conio.h>

  

void swap(int *xp, int *yp) 
{ 
int n,i,j,arr[],temp;
  clrscr();
  
    int temp = *xp; 

    *xp = *yp; 

    *yp = temp; 
} 

  
// A function to implement bubble sort 

void bubbleSort(int arr[], int n) 
{ 
  int i, j;
printf("Enter the number of Elements\n");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for (i = 0; i < n-1; i++) 
  {
    scanf("%d",&a[i]);
  }

  

       // Last i elements are already in place  
  for (i=0; i<n-1;i++)
  {
    for (j = 0; j < n-i-1; j++)  
    {
      if (arr[j] > arr[j+1]) 
        temp = *xp; 
          *xp = *yp; 
              *yp = temp; 
    }
  }

              swap(&arr[j], &arr[j+1]); 
} 
  

  
/* Function to print an array */

void printArray(int arr[], int size) 
{ 

    int i; 
      printf("the sorted array elements are\n");
          for (i=0; i < size; i++) 

        printf("%d ", arr[i]); 

    printf("\n"); 
} 

  
// Driver program to test above functions 

int main() 
{ 

    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 

    int n = sizeof(arr)/sizeof(arr[0]); 

    bubbleSort(arr, n); 

    printf("Sorted array: \n"); 

    printArray(arr, n); 

    return 0; 
} 

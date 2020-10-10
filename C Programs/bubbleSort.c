//Bubble Sort in C 

#include <stdio.h> 
 
void swapElements(int *a, int *b) //Swap values
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
   

void bubbleSort(int array[], int n){ //Bubble sort function
 
   int i, j; 
   for (i = 0; i < n-1; i++) {
   	
   		for (j = 0; j < n-i-1; j++) {
   			
		   	if (array[j] > array[j+1]) {
   				swapElements(&array[j], &array[j+1]); 
		   }  
		}
   }      
       
} 
   
void printArray(int array[], int size) //Print elements in the array
{ 
    int i; 
    for (i=0; i < size; i++){
    	printf("%d ", array[i]); 
	}  
} 
   
int main() 
{ 
    int array[] = {1,8,4,7,33,100,-7,4,-100};  //Example Array
    int size = sizeof(array)/sizeof(array[0]); //No of elements in the array
    
    printf("\nArray Elements before sorting : ");
    printArray(array,size);
    
    bubbleSort(array, size); 
    printf("\n\nArray elements after sorting using the bubble sort : "); 
    printArray(array, size); 
    
    return 0; 
}

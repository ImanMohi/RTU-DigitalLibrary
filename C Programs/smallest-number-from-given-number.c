#include<stdio.h> 

#define MAX 50 

 void findSmallest(int n) 
{ 
	int i, j=0; 
	int res[MAX]; // To sore digits of result in reverse order 

 	if (n < 10) 
	{ 
		printf("%d", n+10); 
		return; 
	} 

 	for (i=9; i>1; i--) 
	{ 
		// If current digit divides n, then store all 
		// occurrences of current digit in res 
		while (n%i == 0) 
		{ 
			n = n/i; 
			res[j] = i; 
			j++; 
		} 
	} 

 	if (n > 10) 
	{ 
		printf("Not possible"); 
		return; 
	} 

 	for (i=j-1; i>=0; i--) 
		printf("%d", res[i]); 
} 

 int main() 
 { 
	findSmallest(4); 
	printf("\n"); 

	findSmallest(35); 
	printf("\n"); 

	findSmallest(16); 
	printf("\n"); 

	findSmallest(82); 
	return 0; 
} 

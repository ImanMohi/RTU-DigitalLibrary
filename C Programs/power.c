// program to find the power of a number
#include<stdio.h>
int main()
{
	int power, base;
	int result = 1;

	printf("Enter the base: ");
	scanf("%d",&base);

	printf("Enter the power: ");
	scanf("%d",&power);

	for(int i = 1; i <= power; i++) {
		result = result * base;
	}

	printf("Result is: %d\n",result);

	return 0;
}

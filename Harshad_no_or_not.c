#include<stdio.h>
int main()
{
	//fill the code
	int num;
	int temp;
	scanf(“%d”,&num);
	int sum = 0;
	temp = num;
	while(temp)
	{
		sum += temp % 10;
		temp = temp / 10;
	}
	int res = num % sum;
	if(res == 0)
		printf(“Harshad Number”);
	else
		printf(“Not Harshad Number”);
	return 0;
}

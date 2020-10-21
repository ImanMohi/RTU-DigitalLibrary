 #include <stdio.h>
int main()
{
  int sum=0;
  int num,temp,rem;
 
  printf("Enter the number:\n");
  scanf("%d",&num);
 
  temp=num;
  while(num>0)
  {
  	rem=num%10;
  	sum=sum+(rem*rem*rem);
  	num=num/10;
  }
  if(temp==sum)
  printf("The number is armstrong:");
  else
  printf("The number is not an armstrong number:");
  return 0;
}

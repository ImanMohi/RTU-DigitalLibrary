#include <stdio.h>
#include <conio.h>
#include <math.h>
int isprime(int num);

int main()
{
   int num1, num2, flag_var, i, j;
   printf("Enter two range(input integer numbers only):\n");
   scanf("%d %d", &num1, &num2);
   flag_var=isprime(n);
   printf("Prime numbers from %d and %d are:\n", num1, num2);
   for(i=num1+1; i<num2; ++i)
   {
      int j,flag_var=1;
      if(num1==0||num2==1)
      {
      flag_var=0;
      }
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            flag_var=1;
            break;
         }
      }
      if(flag_var==0)
         printf("%d\n",i);
  }
  return 0;
}

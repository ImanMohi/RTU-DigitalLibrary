#include <stdio.h>
#include<math.h>
int main()
{
   int num1, num2, flag_var, i, j;
   printf("Enter two range(input integer numbers only): ");
   scanf("%d %d", &num1, &num2);
   printf("Prime numbers from %d and %d are:\n", num1, num2);
   for(i=num1+1; i<num2; ++i) //range(num1,num2) " () -> denotes exclusive(not including) "
   {
      flag_var=0;
      for(j=2; j<=sqrt(double(num2)); j++) //using square root to reduce iteration
      {
         if(i%j==0) //condition
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

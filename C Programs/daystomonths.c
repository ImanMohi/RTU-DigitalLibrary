#include <stdio.h>

int main()

{

  int days,ndays,months;

  printf("Enter number of days : ");

  scanf("%d",&days);

  months = days/30;

  ndays=days%30;   /* remainder by dividing 30 */

  printf("%d days = %d months and %d days\n",days,months,ndays);

  return (0);

}

 

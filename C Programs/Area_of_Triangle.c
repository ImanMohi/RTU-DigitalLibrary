//C program to find the area of a triangle

#include<stdio.h>
void main()
{ float area,base,height;
printf("Enter the base : ");
scanf("%f",&base);
printf("Enter the height : ");
scanf("%f",&height);
area=0.5*base*height;
printf("Area of a triangle is %f",area);
}

//C program to find the area of a triangle

#include<stdio.h>
#include<conio.h>
void main()
{ 
float a,b,h;
printf("Enter the base of traingle : ");
scanf("%f",&b);
printf("Enter the height of the traingle: ");
scanf("%f",&h);
a=0.5*b*h;
printf("Area of traingle is %f",a);
getch();
}

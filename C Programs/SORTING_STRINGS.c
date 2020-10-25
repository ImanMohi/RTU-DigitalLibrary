#include<stdio.h>  //preprocessordirective
#include<conio.h>
#include<string.h>
void main()
{
int n,i,j;
char name[10][10],temp[10];
printf("enter the n value\t");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter the names\t");
scanf("%s",&name[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(name[i],name[j])>0)
{
strcpy(temp,name[j]);
strcpy(name[j],name[i]);
strcpy(name[i],temp);
}
}
}
printf("\n\t the string in alphabetical order");
for(i=0;i<n;i++)
{
printf("\n\t%s",name[i]);
printf("\n");
}
}

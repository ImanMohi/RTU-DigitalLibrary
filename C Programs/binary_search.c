#include <stdio.h>
#define MAX_LEN 10

void b_search_nonrecursive(int l[],int num,int ele)
{
int l1,i,j, wish = 0;
l1 = 0;
i = num-1;
while(l1 <= i)
{
j = (l1+i)/2;
if( l[j] == ele)
{
printf("\nThe element %d is present at position %d in list\n",ele,j);
wish =1;
break;
}
else
if(l[j] < ele)
l1 = j+1;
else
i = j-1;
}
if( wish == 0)
printf("\nThe element %d is not present in the list\n",ele);
}
void read_list(int l[],int n)
{
int i;
printf("\nEnter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&l[i]);
}
void print_list(int l[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d\t",l[i]);
}

main()
{
int l[MAX_LEN], num, ele,f,l1,a;
int pos;
printf("\n");
printf("\nEnter the number of elements : ");
scanf("%d",&num);
read_list(l,num);
printf("\nElements present in the list are:\n\n");
print_list(l,num);
printf("\n\nEnter the element you want to search:\n\n");
scanf("%d",&ele);
printf("\nNon-Recursive method:\n");
b_search_nonrecursive(l,num,ele);
}



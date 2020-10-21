#define MAX 30
#include<stdio.h>
#include<conio.h>
void create(int set[]);
void print(int set[]);
void difference(int set1[],int set2[],int set3[]);
int member(int set[],int x);

int main()
{ int set1[MAX],set2[MAX],set3[MAX];
  int x,op;
      set1[0]=set2[0]=set3[0]=0;
printf("\nCreating First Set*******");
        create(set1);
 printf("\nCreating Second Set*****");
        create(set2);
  printf("\nFirst Set :\n");
        print(set1);
   printf("\n\nSecond Set :\n");
        print(set2);
    printf("\n\nThird Set :\n");
        print(set3);
  difference(set1,set2,set3);print(set3);
  return 0;
    
}
 /*creates set[] with initial elements*/
 void create(int set[])
   {   int n,i,x;
       set[0]=0;/*make it a null set*/
       printf("\n No. of elements in the set:");
       scanf("%d",&n);
       printf("\n enter set elements :");
       for(i=1;i<=n;i++)
       scanf("%d",&set[i]);
       set[0]=n; //Number of elements.
   }
 void  print(int set[])
  { int i,n;
    n=set[0];/* number of elements in the set */
    printf("\nMembers of the set :-->");
    for(i=1;i<=n;i++)
       printf("%d  ",set[i]);
  }

 /*function returns 1 or 0 depending on whether x belongs   to set[] or not */

 int member(int set[],int x)
  { int i,n;
    n=set[0]; /* number of elements in the set*/
    for(i=1;i<=n;i++)
      if(x==set[i])
     return(1);
     return(0);
  }

/*difference of set1[] and set2[] is stored in set3[]*/

void difference(int set1[],int set2[],int set3[])
      { int i,n;
    n=set1[0];/* number of elements in the set*/
    set3[0]=0;/*make it a null set*/
    for(i=1;i<=n;i++)
       if(!member(set2,set1[i]))
         set3[++set3[0]]=set1[i];  // insert and increment no. of elements
      }



//symetric difference//

#include<stdio.h>
int a[10],b[10],c[10],d[10],i,j,k=0,n,m,flag=0;
void unio()
{
 for(i=0;i<n;i++)
 {
 c[k]=a[i];
 k++; }
for(i=0;i<m;i++)
 {
flag=0;
 for(j=0;j<n;j++)
 {
 if(b[i]==a[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 c[k]=b[i];
 k++;
 }
}
printf("\n Union \n");
for(i=0;i<k;i++)
{
printf("%d ",c[i]);
}
}
void intersection()
{
 printf("\nIntersections\n");
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 {
 if(a[i]==b[j])
 printf("%d ",a[i]);
 }
 }
}
void difference()
{
 printf("\nA-B\n");
 for(i=0;i<n;i++)
 {
 flag=0;
 for(j=0;j<m;j++)
 {
 if(a[i]==b[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 printf("%d ",a[i]);
 }
 printf("\n\nB-A\n");
 for(i=0;i<m;i++)
 {
 flag=0;
 for(j=0;j<n;j++)
 {
 if(b[i]==a[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 printf("%d ",b[i]);
 }
}
void symmetric_diff()
{
 k=0;
 for(i=0;i<n;i++)
 {
 flag=0;
 for(j=0;j<m;j++)
 {
 if(a[i]==b[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 d[k]=a[i];
 k++;
 }
 }
 for(i=0;i<m;i++)
 {
 flag=0;
 for(j=0;j<n;j++)
 {
 if(b[i]==a[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 d[k]=b[i];
 k++;
 }
 }
 
 printf("\n(A-B)U(B-A)\n");
 for(i=0;i<k;i++)
 {
 printf("%d ",d[i]);
 }
}
int main()
{
 printf("Enter the size of array A\n");
 scanf("%d",&n);
 printf("Enter the element of First array A\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the size of array B\n");
 scanf("%d",&m);
 printf("Enter the elements of array B\n");
 for(j=0;j<m;j++)
 {
 scanf("%d",&b[j]);
 }
 unio();
 printf("\n");
 intersection();
 printf("\n");
 printf("difference of set\n");
 difference();
 printf("\n");
 symmetric_diff();
 printf("\n");
 return 0;
 }
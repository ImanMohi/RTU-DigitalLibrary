#include<stdio.h> 
int main() 
{ 
    int i,n; 
    printf("Enter the number of elements\n"); 
    scanf("%d",&n); 
    float m[n]; 
    printf("Enter the value of the elements\n"); 
    for(i=0;i<=n-1;i++) 
    { 
        scanf("%f",&m[i]); 
    } 
    printf("Values of elements are\n"); 
    for(i=0;i<=n-1;i++) 
    { 
        printf("%f\n",m[i]); 
    } 
}

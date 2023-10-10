#include<stdio.h>                                                            
                                                                                
void main()                                                                     
{                                                                               
    int radius;                                                                 
    float volume=0, pi=3.14;                                                    
    printf("\nFinds volume of a sphere\n-------------------");                  
    printf("\nEnter radius: ");                                                 
    scanf("%d", &radius);                                                       
                                                                                
    volume = ((float)4/(float)3)*pi*(radius*radius*radius);                                   
                                                                                
    printf("Volume of a sphere is: %.2f", volume);                              
}    

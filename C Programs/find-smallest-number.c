void findSmallest(int n) 
{ 
    int i, j=0; 
    int res[MAX];
  
    if (n < 10) 
    { 
        printf("%d", n+10); 
        return; 
    } 
  
    for (i=9; i>1; i--) 
    { 
        while (n%i == 0) 
        { 
            n = n/i; 
            res[j] = i; 
            j++; 
        } 
    } 
  
    if (n > 10) 
    { 
        printf("Not possible"); 
        return; 
    } 
  
    for (i=j-1; i>=0; i--) 
        printf("%d", res[i]); 
} 
  
int main() 
{ 
    findSmallest(7); 
    printf("\n"); 
  
    findSmallest(36); 
    printf("\n"); 
  
    findSmallest(13); 
    printf("\n"); 
  
    findSmallest(100); 
    return 0; 
} 

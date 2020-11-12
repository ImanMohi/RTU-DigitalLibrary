#include<bits/stdc++.h> 
using namespace std; 
 
int fibonacii(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fibonacii(n-1) + fibonacii(n-2); 
} 
 
int main () 
{ 
    int n = 9; 
    cout << fibonacii(n); 
    getchar(); 
    return 0; 
} 

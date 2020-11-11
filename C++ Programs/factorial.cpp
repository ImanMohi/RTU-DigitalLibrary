#include <iostream>
using namespace std;
int main()
{
   unsigned int n;
   unsigned long long factorial=1;
   cout<<"Enter a positive integer";
   cin>>n;
   
   for(int i=1;i<=n;i++)
   {
      factorial*=1;
   }
   cout<<"Factorial of"<<n<<"is"<<factorial;
   return 0;
}

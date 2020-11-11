#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    bool i;
    int flag,x;
    i=true;
    flag=0;
    do{
       while (i){
                 i=false;
                 cout <<"\nEnter a three-digit integer: ";
                 cin >> num;
                 originalNum = num;
                 remainder = originalNum % 10; // remainder contains the last digit        
                 result += remainder * remainder * remainder;
                 originalNum /= 10; // removing last digit from the orignal number
                 if(originalNum!=0)
                  {
                   i=true;
                  }
                }
        if(result==num) //Showing the Output
        {cout<<"\n"<<num<<"is an Armstrong number."<<endl;}
        else
        {cout<<"\n"<<num<<"is not an Armstrong number."<<endl;}
        cout<<"\nShould  you want to check another number or want to exit";
        cout<<"\n1(to check another number) or 0(for exit):";
        cin>>x;
        if(x!=0)
        {
            flag=1;
        }
       }while(flag) //For doing the task multiple times
    return 0;
}

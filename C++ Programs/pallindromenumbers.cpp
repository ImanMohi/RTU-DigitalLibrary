#include<stdio.h>
#include <iostream>
using namespace std;
 
int main(){
  int num,r,sum=0,temp;
 
  cout << "Enter a number: ";
  cin >> num;
 
  for(temp=num;num!=0;num=num/10){
    r=num%10;
    sum=sum*10+r;
  }
  if(temp==sum)
    cout << temp << " is a palindrome";
  else
    cout << temp << " is not a palindrome";
 
  return 0;
}
 
/*
OUTPUT
Enter a number: 25
25 is not a palindrome
*/

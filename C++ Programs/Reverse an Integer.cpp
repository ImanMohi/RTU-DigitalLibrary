#include <iostream>
using namespace std;

int main() {
	int t,num;
	cin>>t;
	while(t--){
	    int rev=0;
	  cin>>num;
	  while(num>0){
	      rev=rev*10 + num%10;
	      num=num/10;
	  }
	  cout<<rev<<"\n";
	    
	}
	return 0;
}

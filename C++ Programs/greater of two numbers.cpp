#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	if(a>b){
		cout<<a<<" is greater then "<<b<<endl;
	}
	else if(a==b){
		cout<<a<<" is equal to "<<b<<endl;
	}
	else{
		cout<<b<<" is greater then "<<a<<endl;
	}
}

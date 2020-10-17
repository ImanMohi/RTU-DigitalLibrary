#include<iostream>
using namespace std;
int main()
{
	int a,b,i;
	cout<<"enter value of divident";
	cin>>a>>b;
	for(i=a;i>=1;i--)
	{
		if((a%i==0)&&(b%i==0))
		{
			cout<<"greatest common dividion is"<<i;
			break;
		}
	}
}

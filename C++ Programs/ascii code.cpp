#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,k;
    string s;
    int j=s.length()-1;
    cin>>s;
    while(i<(s.length()-1))
    {
        k=((int (s[i])-96+s[s.length()-1-i]-96)%26)+97;
        i++;
        j--;
    }
    cout<<(char)k;
    return 0;
}

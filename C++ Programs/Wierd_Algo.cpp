#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int x,n,total;cin>>n;
    long long int a[n];
    total=((n)*(n+1))/2;
    // cout<<total<<"\n";
    for(int i=0;i<n-1;i++){
        cin>>x;
        total-=x;
        // cout<<x<<"\t";
    }
    cout<<total;
}
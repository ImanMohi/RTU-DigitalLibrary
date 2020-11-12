#include<bits/stdc++.h>
using namespace std;
int main(){
    int l=0,n,x;cout<<"enter";cin>>n;
    vector<int>a(n);
    vector<int>v(n);
    for(int i=0;i<=n;i++)
        a[i]=-1;
    for(int i=2;i<=n;i++){
        if(a[i]==-1){
            for(int j=i;j<=n;j+=i){
                if(a[j]==-1)
                a[j]=i;
            }
        }
    }
    while(1){
        x=a[n];
        n/=x;
        v[l]=x;
        l++;
        if(n<1)
            break;
        cout<<x<<" ";       
    }
}

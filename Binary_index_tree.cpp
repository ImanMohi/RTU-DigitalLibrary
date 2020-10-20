#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN=1e5;
ll a[mxN],BIT[mxN],n;
int lcb(int x){
	return (x & (-x));
}
void update(int i, ll val){
	
	while(i<=n ){
		
		BIT[i]=min(val,BIT[i]);
		i=lcb(i)+i;
		
	}
}
void create_tree(){
	
	for(int i=1;i<=n;i++){
		update(i,a[i]);
	}
}
int query(int l,int r){
	ll sum=BIT[r];
	r=r-lcb(r);
	while(l<=r){
		sum=min(sum,BIT[r]);
		r=r-lcb(r);
	}
	return sum;
}
int main() {
	cin>>n;
	memset(BIT,10,sizeof(BIT));
	for(int i=1;i<=n;i++){
		cin>>a[i];
		update(i,a[i]);
	}
	ll q,l,r;
	for(int i=0;i<=n;i++){
		cout<<BIT[i]<<endl;
	}
	cin>>q;
	while(q--){
		cin>>l>>r;
		if(l==r){
			cout<<a[l+1]<<endl;
		}else
			cout<<query(l,r)<<"\n";
	}
	return 0;
}

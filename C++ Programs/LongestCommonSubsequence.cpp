//#define sort(nums) sort(nums.begin(),nums.end())
#include <bits/stdc++.h>
#define mod 1000000007
#define deb(x) cout<<#x<<" "<<x<<endl
using namespace std;
using ll = long long int;

void jets(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int main(){
    jets();
    string x, y;
    int m,n;
    cin>>x>>y;
    m=x.length();
    n=y.length();
    int dp[m+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<m+1;i++){
    	for(int j=1;j<n+1;j++){
    		if(x[i-1]==y[j-1])
    			dp[i][j]=1 + dp[i-1][j-1];
    		else
    			dp[i][j]=0 + max(dp[i-1][j],dp[i][j-1]);
    	}
    }
    string s="";
    int i=m,j=n;
    while(i>0 && j>0){
    	if(x[i-1]==y[j-1]){
    		s.push_back(x[i-1]);
    		i--,j--;
    	}
    	else{
    		if(dp[i-1][j]>dp[i][j-1])
    			i--;
    		else
    			j--;
    	}
    }
    reverse(s.begin(), s.end());
    cout<<s<<endl;

    return 0;
}

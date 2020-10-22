#include<bits/stdc++.h>
using namespace std;

int solve(string s){
    int n=s.length();
    vector<int> count(26,0);
    int l=0,r=0;
    int maxlen=0;
    while(r<n){
        count[s[r]-'a']++;
        if(count[s[r]-'a']>1){
            while(count[s[r]-'a']>1){
                count[s[l]-'a']--;
                l++;
            }
            r++;
        }
        else{
            r++;
        }
        maxlen=max(maxlen,r-l);
        cout<<l<<" "<<r<<" "<<s[l]<<" "<<s[r]<<endl;
    }
    return maxlen;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
    }
	
	return 0;
}

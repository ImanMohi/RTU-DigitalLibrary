//LCS - Longest Common Subsequence   
//Time Complexity: O(nm)

#include <iostream>
#include <cstring>
#include <algorithm>
#define MAXN 1010

using namespace std;

int memo[MAXN][MAXN], s1[MAXN], s2[MAXN];

int lcs(int a, int b){
    if(memo[a][b] != - 1) return memo[a][b];

    if(a == 0 || b == 0) return memo[a][b] = 0;

    if(s1[a] == s2[b]) return memo[a][b] = 1 + lcs(a-1, b-1);

    return memo[a][b] = max(lcs(a-1, b), lcs(a, b-1));

}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(0);
    int n, m;

    memset(memo, -1, sizeof(memo));
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> s1[i];
    }
    for(int i = 1; i <= m; i++){
        cin >> s2[i];
    }

    int len_lcs = lcs(n, m);
    cout <<  len_lcs << endl;
    return 0;
}

# This is a sequence alignment problem using dynamic programming.

def minPenalty(x,y,pxy, pgap):
    m=len(x)
    n=len(y)
    dp=[[0 for i in range(n+m+1)] for j in range(n+m+1)]
    for i in range(n+m+1):
        dp[0][i]=i*pgap
        dp[i][0]=i*pgap
    for i in range(1,m+1):
        for j in range(1,n+1):
            if x[i-1]==y[j-1]:
                dp[i][j]=dp[i-1][j-1]
            else:
                dp[i][j]=min(dp[i-1][j-1]+pxy, dp[i-1][j]+pgap, dp[i][j-1]+pgap)
    return dp[m][n]

gene1="AGGGCT"
gene2="AGGCA"
misMatchPenalty=3
gapPenalty=2
print(minPenalty(gene1, gene2, misMatchPenalty, gapPenalty))

#define MOD 1000000007
int kInversePairs(int n, int k) {
    int dp[n+1][k+1];
    for(int i = 0;i <=n ;i++){
    for(int j = 0;j <=k ;j++){
    dp[i][j] = 0;
    }
    }
    dp[0][0] = 1;
    
    for(int i = 1;i <= n;i++){
        for(int j = 0;j <=k;j++){
            dp[i][j] = dp[i-1][j];
            if(j >= i){
                dp[i][j] = (dp[i][j] - dp[i-1][j-i] + MOD)%MOD;
            }
            if(j>0){
                dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD;
            }
        }
    }
    
    return dp[n][k];
}
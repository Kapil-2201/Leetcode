int min(int a,int b,int c){
    int t = a > b ? b : a;
    return c < t?c:t;
}
int minDistance(char* w1, char* w2) {
    int a = strlen(w1);
    int b = strlen(w2);
    int i = 0,j = 0;
    int dp[a+1][b+1];
    for( i = 0;i <= a;i++){
        dp[i][0] = i;
    }
    for( j = 0;j <= b;j++){
        dp[0][j] = j;
    }
    for(i = 1;i <= a;i++){
        for(j = 1;j <= b;j++){
            if(w1[i-1] == w2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = 1 + min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]); 
            }
        }
    }
    return dp[a][b];
}
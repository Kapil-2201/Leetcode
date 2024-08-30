int longestCommonSubsequence(char* text1, char* text2) {
    int l1 = strlen(text1);
    int l2 = strlen(text2);
    int dp[l1+1][l2+1];
    for(int i = 0;i<=l1;i++){
        dp[i][0] = 0;
    }
    for(int j = 0;j<=l2;j++){
        dp[0][j] = 0;
    }
    for(int i = 1;i <=l1;i++){
        for(int j = 1;j <= l2;j++){
            if(text1[i-1] == text2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else
            dp[i][j] = dp[i-1][j] >= dp[i][j-1] ? dp[i-1][j]:dp[i][j-1];
        }
    }
    return dp[l1][l2];
}
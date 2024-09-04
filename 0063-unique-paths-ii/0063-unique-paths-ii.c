int uniquePathsWithObstacles(int** grid, int m, int* n) {
    int dp[m][*n];
    for(int i = 0;i < m;i++){
        dp[i][0] = (grid[i][0] == 1) ? 0 :(i==0?1:dp[i-1][0]);
    }
    for(int i = 0;i < *n;i++){
        dp[0][i] = (grid[0][i] == 1) ? 0 :(i==0?1:dp[0][i-1]);
    }
    for(int i = 1;i < m ;i++){
        for(int j = 1;j < *n;j++){
            if(grid[i][j]!=1)
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
            else{
                dp[i][j] = 0;
            }
        }
    }
    return dp[m-1][*n-1];
}
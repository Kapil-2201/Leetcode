int minMoves(int* nums, int n) {
    int min = nums[0];
    for(int i = 1;i < n;i++){
        if(nums[i] < min){
            min = nums[i];
        }
    }
    int ans = 0;
    for(int i = 0;i < n;i++){
        ans += nums[i] - min;
    }

    return ans;
}
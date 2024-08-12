bool canAliceWin(int* nums, int n) {
    int a = 0,b = 0;
    for(int i = 0; i < n;i++){
        if(nums[i]<=9) a += nums[i];
        else b += nums[i];
    }
    return a!=b;
}
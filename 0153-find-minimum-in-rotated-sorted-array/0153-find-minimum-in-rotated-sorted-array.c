int findMin(int* nums, int n) {
    int min = nums[0];
    for(int i = 1; i < n;i++){
        if(min> nums[i]) min = nums[i];
    }
    return min;
}
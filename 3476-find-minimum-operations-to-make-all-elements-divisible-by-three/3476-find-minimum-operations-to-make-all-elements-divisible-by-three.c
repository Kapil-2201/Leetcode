int minimumOperations(int* nums, int n) {
    int count = 0;
    for(int i = 0;i < n;i++){
        if((nums[i] - 1) % 3 == 0) count++;
        if((nums[i] + 1) % 3 == 0) count++;
    }
    return count;
}
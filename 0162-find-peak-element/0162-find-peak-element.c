int findPeakElement(int* nums, int n) {
    if(n == 0) return -1;
    int max = INT_MIN,in=0;
    for(int i =0 ;i < n;i++){
        if(nums[i] > max) {max = nums[i]; in = i;}
    }
    return in;
}
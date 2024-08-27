int rob(int* nums, int n) {
    if(n==0) return 0;
    if(n==1) return nums[0];
    int first = 0;
    int second = 0;
    for(int i = 0; i < n;i++){
            int temp = first;
            first = second > first ? second:first;
            second = temp +nums[i];
    }
    return first > second ? first:second;
}
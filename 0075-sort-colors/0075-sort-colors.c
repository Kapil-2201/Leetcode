void sortColors(int* nums, int n) {
    int c0=0;
    int c1=0;
    int c2=0;
    for(int i = 0;i < n;i++){
        if(nums[i] == 0) c0++;
        if(nums[i] == 1) c1++;
        if(nums[i] == 2) c2++;
    }
    for(int i = 0;i < c0;i++){
        nums[i] = 0;
    }
    for(int i = c0;i < c0+c1;i++){
        nums[i] = 1;
    }
    for(int i = c0+c1;i < c0+c1+c2;i++){
        nums[i] = 2;
    }
}
int missingNumber(int* nums, int n) {
    int k;
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(nums[i]>nums[j]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    for( k = 0; k < n ;k++){
        if(nums[k] != k) break;
    }
    return k;
}
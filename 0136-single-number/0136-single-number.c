int singleNumber(int* nums, int n) {
    if(n == 1) return nums[0];
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(nums[i]<nums[j]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }    
    for(int i = 0;i < n-1;i=i+2){
        if(nums[i] != nums[i+1]){
           return  nums[i];
        }
    }    
    return nums[n-1];
}
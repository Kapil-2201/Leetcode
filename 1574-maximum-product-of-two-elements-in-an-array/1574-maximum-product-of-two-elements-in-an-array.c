int maxProduct(int* nums, int n) {
    for(int i = 0;i < n;i++ ){
        for(int j = i + 1;j < n;j++){
            if(nums[i] < nums[j]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    return (nums[0] - 1)*(nums[1]-1);
}
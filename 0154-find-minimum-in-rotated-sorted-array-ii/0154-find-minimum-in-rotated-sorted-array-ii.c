int findMin(int* nums, int n) 
{
    int min = nums[0];
    for(int i = 0;i < n;i++){
        if(min > nums[i]){
            min = nums[i];
        }

    }
    return min;

}
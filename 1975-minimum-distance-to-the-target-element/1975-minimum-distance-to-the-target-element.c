int getMinDistance(int* nums, int numsSize, int target, int start) {
    int min = numsSize;

    for(int i = 0;i < numsSize;i++){
        if(nums[i] == target){
            int dis = abs(i-start);
        if(dis<min){
            min = dis;
        }
        }

    }
    return min;
    
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int n, int target, int* returnSize) {
    int i = 0;
    *returnSize = 2;
    int * arr = (int*)malloc(*returnSize * sizeof(int));
    // for(int i = 0;i < n;i++){
    //     for(int j = i+1; j < n;j++){
    //         if(nums[i] + nums[j] == target){
    //             arr[0] = i +1 ;
    //             arr[1] = j +1 ;
    //             return arr;
    //         }
    //     }
    // }
    n--;
     while(i < n){
        int check = nums[i]+nums[n];
        if(check == target) break;
        if(check < target) i++;
        else n--;
    }
    arr[0] = i +1 ;
    arr[1] = n +1 ;
    return arr;

}
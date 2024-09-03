/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int n, int t, int* r) {
    *r = 2;
    int*ans=(int*)malloc(*r*sizeof(int));
    ans[0] = -1;
    ans[1] = -1;
    for(int i = 0;i < n;i++){
        if(nums[i] == t){
            ans[0] = i;
            break;
        }    
    }
    for(int i = n-1;i >= 0;i--){
        if(nums[i] == t){
            ans[1] = i;
            break;
        }    
    }

return ans;
}
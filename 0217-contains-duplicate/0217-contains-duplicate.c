int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
bool containsDuplicate(int* nums, int numsSize) {
     qsort(nums, numsSize, sizeof(int), compare);
 
   for(int j = 0; j < numsSize-1;j++){
    if(nums[j] == nums[j + 1]) return true;
   
   }
   return false;
}
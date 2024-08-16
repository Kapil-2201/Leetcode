int singleNumber(int* nums, int numsSize) {
    int i,j,bit,result=0; 
    for(i=0; i<32; i++){ 
        bit=0;
        for(j=0; j<numsSize; j++){ 
            if(nums[j] & (1u << i)) 
                bit++;
        }
        bit %=3;
        result |= ((unsigned int)bit << i); 
    }
    return result;
}
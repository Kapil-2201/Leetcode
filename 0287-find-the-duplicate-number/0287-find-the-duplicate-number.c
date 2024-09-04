int findDuplicate(int* nums, int n) {
    int freq[1000000]={0};
    for(int i = 0;i <n;i++){
        freq[nums[i]]++;
    }
    for(int i = 0;i<1000000;i++){
        if(freq[i]>1) return i;
    }
    return 0;
}
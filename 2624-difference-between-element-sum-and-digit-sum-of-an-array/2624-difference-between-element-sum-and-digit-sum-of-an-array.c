int digitssum(int n){
    int sum=0;
    while(n != 0){
        sum += n%10;
        n/=10;
    }
    if(sum>9){
        digitssum(sum);
    }
    return sum;
}
int differenceOfSum(int* nums, int n) {
    int sum1 = 0;
    int sum2 = 0;
    for(int i =0;i<n;i++){
        sum1 += nums[i];     
    }
    for(int i =0;i<n;i++){
        if(nums[i]>9){
            nums[i] = digitssum(nums[i]);
        }     
        sum2 += nums[i];
    }
    return sum1-sum2;
}
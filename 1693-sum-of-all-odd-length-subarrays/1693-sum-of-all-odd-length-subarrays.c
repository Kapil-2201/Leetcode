int sumOddLengthSubarrays(int* arr, int arrSize){
    int sum=0;
    for(int i=0;i<arrSize;i++){
        int n=arrSize-i;
        int t=i+1;
        n=n*t;
        n=n%2==0?n/2:(n+1)/2;
        sum+=n*arr[i];
    }
    return sum;
}
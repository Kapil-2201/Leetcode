int subsetXORSum(int* nums, int n) {
  int sum = 0;
  for(int i = 0; i < n;i++){
    sum = sum | nums[i];
  }  
  sum = (sum  << (n-1));
  return sum;
}
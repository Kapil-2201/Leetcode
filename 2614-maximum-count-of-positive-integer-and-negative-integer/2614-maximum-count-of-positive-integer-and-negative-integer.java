class Solution {
    public int maximumCount(int[] nums) {
        int len = nums.length;
        int negative = 0;
        int zero = 0;
        for(int i = 0;i < len;i++){
            if(nums[i] < 0){
                negative++;
            }
            if(nums[i]==0){
                zero++;
            }
        }
            int positive = len - negative - zero;
            return positive >= negative ? positive:negative;
    }
}
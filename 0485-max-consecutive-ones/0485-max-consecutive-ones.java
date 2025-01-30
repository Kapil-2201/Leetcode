class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int one = 0;
        int max = 0;
        for(int i = 0;i < nums.length;i++){
            if(nums[i] == 1) one++;
            max = Math.max(max,one);
            if(nums[i] == 0) one = 0;
        }
        return max;
    }
}
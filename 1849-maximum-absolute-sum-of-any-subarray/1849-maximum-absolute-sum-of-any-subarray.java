class Solution {
    public int maxAbsoluteSum(int[] nums) {
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        int sum = 0;
        for(int i : nums){
            sum += i;
            if(sum > max){
                max = sum;
            }

            if(sum < 0) sum = 0;    
        }

        for(int i : nums){
            if(sum > 0) sum = i;    
            else sum += i;
            min = Math.min(sum,min);
        }
        return Math.abs(min) > max ? Math.abs(min) : max;
    }
}
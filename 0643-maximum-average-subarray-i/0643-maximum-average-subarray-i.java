class Solution {
    public double findMaxAverage(int[] nums, int k) {

        double max = Integer.MIN_VALUE;
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        max = (double) sum / (double) k;

        for (int j = k; j < nums.length; j++) {
            sum += nums[j] - nums[j - k];
            max = Math.max(max, (double) sum / k);
        }
        return max;
    }
}
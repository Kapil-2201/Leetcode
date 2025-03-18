class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int m = matrix.length;
        int n = matrix[0].length;
        int arr[] = new int[m * n];
        int index = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr[index++] = matrix[i][j];
            }
        }
        
        int left = 0;
        int right = arr.length-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(arr[mid] == target ) return true;
            else if(arr[mid] > target) right = mid - 1;
            else
            left = mid + 1;
        }

        return false;

    }
}
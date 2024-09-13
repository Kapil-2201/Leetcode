class Solution {
    public int countNegatives(int[][] grid) {
       int count = 0;
       int row = grid.length - 1;
       int col = 0;
        while(row>=0&&col<grid[0].length){
        if(grid[row][col]<0){
            count+=grid[0].length-col;
            row--;
        }
        else{
            col++;
        }

        }
    return count;
    }
}
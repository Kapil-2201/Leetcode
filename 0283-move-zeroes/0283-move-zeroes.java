class Solution {
    public void moveZeroes(int[] arr) {
        int notzero = 0;
for(int i = 0; i < arr.length;i++){
if(arr[i] != 0){
int temp = arr[i];
arr[i] = arr[notzero];
arr[notzero] = temp;
notzero++;}}
}
    }

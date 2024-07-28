int removeDuplicates(int* arr, int n) {
    if(n==0) return 0;
    int j = 1;
    for(int i = 0;i < n;i++){
        if(arr[i] != arr[j-1]){
            arr[j] = arr[i];
            j++;
        }
    }

return j;
    
}
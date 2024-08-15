double findMedianSortedArrays(int* nums1, int n1, int* nums2, int n2) {
    int n = n1+n2, arr[n];
    for(int i = 0;i < n1;i++){
        arr[i] = nums1[i];
    }
    for(int i = 0;i < n2;i++){
        arr[n1+i] = nums2[i];
    }
    for(int i = 0;i < n; i++){
        for(int j = i + 1;j < n;j++){
            if(arr[i] < arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    if(n % 2 == 0) return ((double)arr[(n/2) - 1]  + (double)arr[n/2])/2;
    return (double)arr[n/2];
    
}
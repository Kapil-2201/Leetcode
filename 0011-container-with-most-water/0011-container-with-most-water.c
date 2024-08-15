int maxArea(int* arr, int n) {
    int max = 0;
    int start = 0,end = n - 1;
    while(start < end){
        int h = arr[start] < arr[end] ? arr[start] : arr[end];
        int w = end - start;
        int area = w*h;
        if(area > max) max = area;
        if(arr[start]<arr[end]) start++;
        else end--;

    }
    return max;
}
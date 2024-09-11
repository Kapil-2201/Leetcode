int candy(int* arr, int n) {
    int* count = (int*)malloc(n*sizeof(int));
    for(int i = 0;i < n; i++){
        count[i] = 1;
    }

      for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            count[i] = count[i - 1] + 1;
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > arr[i + 1] && count[i] <= count[i + 1]) {
            count[i] = count[i + 1] + 1;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += count[i];
    }

   
    free(count);


    return ans;
}
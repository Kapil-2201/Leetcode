void merge(int* nums, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* leftArray = (int*)malloc(n1 * sizeof(int));
    int* rightArray = (int*)malloc(n2 * sizeof(int));

   
    for (int i = 0; i < n1; i++)
        leftArray[i] = nums[left + i];
    for (int j = 0; j < n2; j++)
        rightArray[j] = nums[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            nums[k] = leftArray[i];
            i++;
        } else {
            nums[k] = rightArray[j];
            j++;
        }
        k++;
    }

   
    while (i < n1) {
        nums[k] = leftArray[i];
        i++;
        k++;
    }

  
    while (j < n2) {
        nums[k] = rightArray[j];
        j++;
        k++;
    }

   
    free(leftArray);
    free(rightArray);
}

void mergeSort(int* nums, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

   
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);

        merge(nums, left, mid, right);
    }
}

int* sortArray(int* nums, int n, int* returnSize) {
    *returnSize = n;
   
    int* sortedArray = (int*)malloc(n * sizeof(int));
    if (!sortedArray) return NULL;  
    for (int i = 0; i < n; i++) {
        sortedArray[i] = nums[i];
    }
    
    mergeSort(sortedArray, 0, n - 1);
    
    return sortedArray;
}

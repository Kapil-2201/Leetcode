void sort(int arr[]){
    int temp;
    for(int i = 0; i < 4; i++){
        for(int j = i+1; j < 4; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int minimumSum(int num) {
    int index = 0;
    int arr[4];
    int rev = 0;
    while(num)
    {
        arr[index++] = num % 10;
        num /= 10;
    }
    sort(arr);
    for(int i = 0; i < 4; i++){
    }
    int sum = (arr[0] + arr[1]) * 10 + arr[2] + arr[3];
    return sum;
}
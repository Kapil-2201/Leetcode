int chalkReplacer(int* arr, int n, int k) {
long sum = 0;
for(int i = 0;i<n;i++){
    sum += arr[i];
}
int remaining = k % sum;
for(int i = 0;i <n ;i++){
    remaining -= arr[i];
    if(remaining < 0) return i;
}
return 0;
}
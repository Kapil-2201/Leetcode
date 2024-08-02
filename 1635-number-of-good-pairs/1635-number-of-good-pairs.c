int numIdenticalPairs(int* num, int n) {
    int freq[101] = {0};
    int count = 0;
    for(int i = 0; i < n ;i++){
        count += freq[num[i]];
        freq[num[i]]++;
    }
    return count;
}
int compare(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int maximumProduct(int* n, int s) {
    if (s < 3) {
        return 0;
    }

    
    qsort(n, s, sizeof(int), compare);

    int product1 = n[0] * n[1] * n[2];
    int product2 = n[s-1] * n[s-2] * n[0];

    return product1 > product2 ? product1 : product2;
}

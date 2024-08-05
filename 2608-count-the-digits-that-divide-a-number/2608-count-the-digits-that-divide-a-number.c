int countDigits(int n) {
    int i = 0, j,k=n;
    while(n > 0){
        j = n % 10;
        if(k % j == 0)
            i++;
        n /= 10;    
    }
    return i;
}
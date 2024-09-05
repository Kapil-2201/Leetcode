bool isPowerOfTwo(int n) {
    long long power = 2;
    if(n == 1 || n == 2) return true;
    if(n % 2 == 0){
        while(n >= power){
            if(power == n){
                return true;
            }
            power*=2;
        }
    }

    return false;
}
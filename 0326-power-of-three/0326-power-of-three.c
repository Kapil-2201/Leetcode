bool isPowerOfThree(int n) {
    long long power = 3;
    if(n<=0) return false;
    if(n == 1 || n == 3) return true;
    if(n % 3 == 0){
        while(n >= power){
            if(power == n){
                return true;
            }
            power*=3;
        }
    }

    return false;
}
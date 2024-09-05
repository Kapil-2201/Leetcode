bool isPowerOfFour(int n) {

    long long power = 4;
    if(n<=0) return false;
    if(n == 1 || n == 4) return true;
    if(n % 4 == 0){
        while(n >= power){
            if(power == n){
                return true;
            }
            power*=4;
        }
    }

    return false;

}
bool isHappy(int n) {
    int sum = 0;
    while(true){
        while(n > 0){
            sum += (n%10)*(n%10);
            n /=10;
        }
        if(sum == 1) return true;
        else if(sum == 4) return false;
        n = sum;
        sum = 0;
    }
}
int digitsum(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n/=10;
    }
    return sum;
}
int getLucky(char* s, int k) {
    int num = 0;
    for(int i = 0;s[i];i++){
        int val =s[i] - 'a' + 1 ;
        num += digitsum(val);
    }
    while(k>1){
        num = digitsum(num);
        k--;
    }
    return num;
}
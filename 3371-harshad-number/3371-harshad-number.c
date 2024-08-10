int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum = 0,temp = x;
    while(x > 0){
        sum += x % 10;
        x /= 10;
    }
    return temp % sum == 0?sum:-1;
}
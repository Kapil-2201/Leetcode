bool canWinNim(int n) {
    if(n>=1 && n<=3) return true;
    if(n%4==0) return false;
    if(n%2==0 && n%3==0) return true;
    if(n%5==0 || n%7==0 || n%2!=0) return true;
    while(n%2==0){
        n/=2;
        if(n%2==0) return false;
    } 
    return true;
}
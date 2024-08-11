int pivotInteger(int n) {
    for(int i =0 ;i <=n;i++){
        if((i*(i+1)/(2)) == ((n*(n+1))/(2) -(i*(i+1)/(2))+i)) return i;
    }
    return -1;
}
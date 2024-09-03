int getLucky(char* s, int k) {
    int num = 0;
    for(int i = 0;s[i];i++){
        int val =s[i] - 'a'+1 ;
        num += (val)%10+(val/10);
    }
    printf("%d",num);
    while(k-->1){
            num = (num/1000) + num/100 + num/10 + num%10 - (num/100)*10-(num/1000)*10;            
    }
    return num;
}
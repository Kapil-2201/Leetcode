int hIndex(int* citations, int citationsSize) {
    for(int i = 0;i < citationsSize;i++){
        for(int j = i+1;j < citationsSize;j++){
            if(citations[i]<citations[j]){
            int temp =citations[i];
            citations[i] = citations[j];
            citations[j] = temp;
            }
        }
    }
int h = citations[citationsSize - 1];
    for(int i = 0;i <citationsSize;i++){
        if(citations[i] >= i + 1){
            h = i+1;
        }
        else break;
    }
return h;

}
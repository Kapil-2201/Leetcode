int firstUniqChar(char* s) {
    int freq[128] = {0};
    for(int i = 0; s[i]!='\0';i++){
        freq[s[i]]++;
    }
    for(int i = 0; s[i]!='\0';i++){
        if(freq[s[i]]==1){
            return i;
        }
    }
    return -1;
}
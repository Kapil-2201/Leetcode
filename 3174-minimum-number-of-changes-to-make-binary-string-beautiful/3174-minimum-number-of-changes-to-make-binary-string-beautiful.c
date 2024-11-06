int minChanges(char* s) {
    int change = 0;
    for (int i = 0;s[i];i=i+2){
        if(s[i]!=s[i+1]){
            change++;
        }
    }
    return change;
}
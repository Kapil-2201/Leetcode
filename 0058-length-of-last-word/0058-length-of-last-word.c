int lengthOfLastWord(char* s) {
    // char*token = strtok(s," ");
   
    // char*lastword = NULL;
    // while(token != NULL){
        
    //     lastword = token;
    //     token = strtok(NULL," ");
    // }

    // return strlen(lastword);


    int len=1;
    for(int i = 1;s[i];i++){
        if(s[i] == 32) continue;
        if(s[i-1] == 32) len = 0;
        len++;
    }
    return len;

}
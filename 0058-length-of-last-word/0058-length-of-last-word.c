int lengthOfLastWord(char* s) {
    char*token = strtok(s," ");
   
    char*lastword = NULL;
    while(token != NULL){
        
        lastword = token;
        token = strtok(NULL," ");
    }

    return strlen(lastword);



}
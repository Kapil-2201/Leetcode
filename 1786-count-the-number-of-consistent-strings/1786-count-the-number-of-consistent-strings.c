bool isConsistent(char*allowed,char*word){
    int freq_a[26] = {0};   
    
    for(int i = 0;allowed[i];i++){
        freq_a[allowed[i]-'a']++;
    }
    
    for(int i = 0;word[i];i++){
        int in = word[i] - 'a';
        if(freq_a[in] == 0){
            return false;
        }
    } 
    return true;  
}

int countConsistentStrings(char * allowed, char ** words, int wordsSize){
int count = 0;
for(int i = 0;i < wordsSize;i++){
    if(isConsistent(allowed,words[i])){
        count++;
    }
}
return count;
}
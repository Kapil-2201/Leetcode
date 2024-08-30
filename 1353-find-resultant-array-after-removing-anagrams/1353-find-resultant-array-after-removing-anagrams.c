bool isAnagram(char*a,char*b){
    int freq[26] = {0};
    
    int l = strlen(a);
    int m = strlen(b);
    if(l!=m)return false;
    for(int i = 0;i < l;i++){
        freq[a[i] - 'a']++;
        freq[b[i] - 'a']--;
    }
    for(int i = 0;i < 26;i++){
        if(freq[i]!=0) return false;
    }
    return true;

}
char** removeAnagrams(char** words, int wordsSize, int* returnSize) {
    int k = 0;
    char**w=(char**)malloc(wordsSize*sizeof(char*));
    w[k++] = words[0];
   for(int i = 1;i < wordsSize;i++)
  {
    if(!isAnagram(words[i],words[i-1])){
        w[k++] = words[i];
    }
  }
   *returnSize=k;
   return w;
}
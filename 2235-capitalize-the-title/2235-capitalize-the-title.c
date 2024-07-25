char* capitalizeTitle(char* s) {
    int w=0,i=0,st=0;

while(s[i]){
if(isspace(s[i])){
if(w>2){
    s[st] = toupper(s[st]);
}
w=0;i++;

}
else{
    if(w==0){
        st=i;
    }
    if(w==0||w>0){
        s[i] = tolower(s[i]);
    }
    w++;
    i++;
}



}
if(w>2){
    s[st] = toupper(s[st]);
}
return s;

}
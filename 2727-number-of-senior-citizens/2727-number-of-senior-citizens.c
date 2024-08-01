int countSeniors(char ** s, int n){
int count = 0;
int  i = 0;
int age;
while(i < n){
age = (s[i][11]-'0') * 10 + (s[i][12] - '0');
if(age > 60)
count++;
i++;
}
return count;

}
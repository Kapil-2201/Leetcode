/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* missingRolls(int* rolls, int s, int mean, int n, int* r) {
    *r = n;
    int sum = 0;

    int*ans = (int*)malloc(*r*sizeof(int));

    for(int i = 0;i < s;i++){
        sum+=rolls[i];
    }
    int target =(s+n)*mean - sum;
    if(target < n || target > 6*n){
       *r = 0;
        return NULL;
    }
    for(int i = 0;i < n;i++){
        ans[i] = target / n + (i < (target % n)?1:0) ;
    }

    return ans;
}
int majorityElement(int* nums, int numsSize) {

    if(numsSize <= 1)
        return nums[0];

    int a[numsSize][2];


    for(int i = 0; i < numsSize; i++)
        for(int j = 0; j < 2; j++)
            a[i][j] = 0;

    for(int i = 0; i < numsSize; i++){
        int number = nums[i];

        for(int j = 0; j <= i; j++){
            if(a[j][0] == number){
                a[j][1]++;
                break;
            }else if(a[j][0] == 0){
                a[j][0] = number;
                a[j][1]++;
                break;
            }
        }
    }

    int max_index = 0, max_value = 0;

    for(int i = 0; i < numsSize; i++){
        if(a[i][1] > max_value){
            max_value = a[i][1];
            max_index = i;
        }
    }
    
    return a[max_index][0];
}
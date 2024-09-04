int maxProfit(int* prices, int s) {
    int max = 0;
    int min = prices[0];
    for(int i = 1;i < s;i++){
        if(prices[i]<min){
            min = prices[i];
        }
        int profit = prices[i] - min;
        if(profit>max){
            max = profit;
        }
    }

    return max;
}
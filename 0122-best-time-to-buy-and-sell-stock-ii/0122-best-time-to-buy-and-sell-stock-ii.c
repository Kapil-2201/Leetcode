int maxProfit(int* prices, int s) {
    int max = 0;
    for(int i = 1;i < s;i++){
        if(prices[i-1]<prices[i]){
            max += prices[i] - prices[i-1];
        }
    }

    return max;
}
int maxProfit(int* prices, int s) {
    int profit1 = 0;
    int profit2 = 0;
    int first  = prices[0]; 
    int second  = prices[0]; 
    for(int i = 1;i < s;i++){
        first = (first < prices[i]) ? first:prices[i];
        profit1 = (prices[i] - first > profit1)?prices[i]-first:profit1;
        second = (prices[i] - profit1 > second)?second:prices[i]-profit1;
        profit2 = (prices[i]-second > profit2)?prices[i]-second:profit2;

    }

    return profit2;
}
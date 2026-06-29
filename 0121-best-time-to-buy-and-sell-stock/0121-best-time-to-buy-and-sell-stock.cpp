class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini= prices[0];// minimum stock price
        // initially the 1st day price is minimum
        int maxProfit= 0;// max profit = 0 initially
        int n= prices.size();
        for(int i=0; i<n ; i++){
            int cost= prices[i]- mini;// today price - minimum  
            maxProfit =max(maxProfit, cost);
            mini= min(mini, prices[i]);
        } 
        return maxProfit;
    }
};
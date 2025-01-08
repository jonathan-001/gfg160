// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/buy-stock-2



class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int profit = 0;
        int mini = INT_MAX;
        for(int i = 0;i<n-1;i++){
            mini = min(mini,prices[i]);
            if(prices[i+1] > mini)
                profit = max(profit,abs(prices[i+1]-mini));
        }
        
        return profit;
    }
};
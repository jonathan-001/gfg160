// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/stock-buy-and-sell2615


// if arr[i]<arr[i+1] add value
// else pass

class Solution {
  public:
    int maximumProfit(vector<int> &arr) {
        // code here
        int n = arr.size();
        int profit = 0;
        for(int i = 0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                profit += (arr[i+1]-arr[i]);
            }
        }
        return profit;
    }
};
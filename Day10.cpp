// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/kadanes-algorithm-1587115620



class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int sum = 0;
        int result = arr[0];
        int n = arr.size();
        for(int i = 0; i<n;i++){
            if(sum<0) sum = 0;
            
            sum += arr[i];
            result = max(result,sum);
        }
        return result;
    }
};
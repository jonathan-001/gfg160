//https://www.geeksforgeeks.org/batch/gfg-160-problems/track/array-bonus-problems/problem/maximize-number-of-1s0905


// sliding window of tracking no of 
// zero if more than k move left 
// tc o(n)  sc-O(n)
class Solution {
  public:
    // k is the maximum number of zeros allowed to flip
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int left = 0;
        int right = 0;
        int maxi = 0;
        int zero = 0;
        while(right<n){
            if(arr[right]==0){
                zero++; 
            }
            // if zero is greater
            while(zero>k && left<=right){
                if(arr[left] == 0){
                    zero--;
                }
                left++;
            }
            maxi = max(maxi,right-left+1);
            right++;
        }
        return maxi;
    }
};
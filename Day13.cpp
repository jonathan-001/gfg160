// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/smallest-positive-missing-number-1587115621

// sorting and tracking positive numbers
class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        int num = 1;
        for(auto it:arr){
            if(it>0 && it == num){
                num++;
            }
        }
        return num;
    }
};
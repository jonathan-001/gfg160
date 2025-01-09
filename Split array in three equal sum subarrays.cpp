// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/array-bonus-problems/problem/split-array-in-three-equal-sum-subarrays


class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
        int n = arr.size();
        int sum = 0;
        for(auto it:arr){
            sum+=it;
        }
        if(sum%3 != 0)
            return {-1,-1};
        
        vector<int>ans;
        int temp = 0;
        for(int i = 0; i<n;i++){
            temp+= arr[i];
            
            if(temp == sum/3){
                ans.push_back(i);
                temp = 0;
            }
            else if(temp > sum/3){
                return {-1,-1};
            }
            
            if(ans.size() == 2)
                break;
        }
        return ans;
    }
};
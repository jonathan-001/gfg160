// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/move-all-zeroes-to-end-of-array0751

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int i = -1;
        for(int j = 0; j<arr.size();j++){
            if(arr[j] != 0){
                swap(arr[++i],arr[j]);
            }
        }
    }
};

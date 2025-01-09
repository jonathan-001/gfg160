// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/array-bonus-problems/problem/last-moment-before-all-ants-fall-out-of-a-plank



// there will be no overall affect of 
// changing directions 
// so for left->arr[i]
// so for right->n-arr[i]
// take the max of both the operation

class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // code here
        int res = 0;
        // for left 
        for(auto it:left){
            // from leftpointer to 0
            res = max(res,it);
        }
        
        // for right
        for(auto it:right){
            // from rightpointer to n
            res = max(res,n-it);
        }
        
        return res;
    }
};
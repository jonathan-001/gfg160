// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/next-permutation5226



// appoach 1 -> generate all permutations and sort them, find next
// approach 2 -> STL next_permutation()
// approach 3 -> find first ele from end which is smaller than next ele

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        // next_permutation(arr.begin(),arr.end());
        int n = arr.size();

        // find first ele which is smaller than next ele
        int ind = -1;
        for(int i = n-1; i>=0 ; i++){
            if(i-1 >=0 && arr[i]>arr[i-1]){
                ind = i;
                break;
            }
        }
        if(ind == -1){
            reverse(arr.begin(),arr.end());
        }
        else{
            // do the operation
            int smal = ind-1;
            // swapping it with the just greater ele
            for(int i = n-1; i>=ind;i--){
                if(arr[i]>arr[smal]){
                    swap(arr[i],arr[smal]);
                    break;
                }
            }
            // reverse the remaining ele
            reverse(arr.begin()+ind,arr.end());
        }

    }
};
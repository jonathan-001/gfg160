// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/merge-two-sorted-arrays-1587115620



// using gap method
// or usign 2 pointer

class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        // 2pointer
        int n = a.size();
        int m = b.size();
        int i = n-1;
        int j = 0;
        // traversing arrys
        while(i>=0 && j<m){
            if(a[i]>b[j]){
                swap(a[i],b[j]);
                i--;
                j++;
            }
            else{
                break;
            }
        }
        // sort the individual arrays
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
    }
};

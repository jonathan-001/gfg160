// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/reverse-an-array

    
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        int left = 0;
        int right = n-1;

        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }      
    }
};
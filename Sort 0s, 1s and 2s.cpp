// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/sort-an-array-of-0s-1s-and-2s4231


// sort the array
// count 0,1 and 2
// dutch flag algo
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int low = 0;
        int mid = 0;
        int high = arr.size()-1;
        
        while(mid<=high){
            // if it is 0
            if(arr[mid] == 0){
                swap(arr[low],arr[mid]);
                mid++;
                low++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else{
                swap(arr[high],arr[mid]);
                high--;
            }
        }
    }
};
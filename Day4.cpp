
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/rotate-array-by-n-elements-1587115621


// approach 1 -> store all ele in temp and shift
// approach 2 -> reverse the array  and d elements
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        /*
        approach 1

        int n = arr.size();
        d = d%n;
        vector<int>temp;
        // stored d elements in temp
        for(int i = 0; i<d;i++){
            temp.push_back(arr[i]);
        }
        // shift the remaining elements
        for(int i = d;i<n;i++){
            arr[i-d] = arr[i];
        }
        // put the d elements back
        for(int i =0; i<d;i++){
            arr[n-d+1] = temp[i];
        }

    */
    // approach 2
    /*
    int n = arr.size();
    d = d%n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
    */
    }
};
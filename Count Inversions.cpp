// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/inversion-of-array-1587115620



// brute force
// checking every pair and count

// using merge sort and count
// main intuition is breaking and counting

class Solution {
    void merge(vector<int>&arr,int low,int mid,int high,int &count){
        vector<int>first;
        vector<int>second;
        for(int i = low;i<=mid;i++){
            first.push_back(arr[i]);
        }
        for(int i = mid+1;i<=high;i++){
            second.push_back(arr[i]);
        }
        // merge two sorted arrays
        int n = first.size();
        int m = second.size();
        int i = 0;
        int j = 0;
        vector<int>temp;
        while(i<n && j<m){
            // if first has lower
            if(first[i]<=second[j]){
                temp.push_back(first[i]);
                i++;
            }
            else if(first[i]>second[j]){
                temp.push_back(second[j]);
                count += (n-i);
                j++;
            }
            // else{
            //     // if there is equality
            //     temp.push_back(first[i]);
            //     i++;
            //     j++;
            // }
        }
        // remaning
        while(i<n){
            temp.push_back(first[i]);
            // count += (m);
            i++;
        }
        while(j<m){
            temp.push_back(second[j]);
            j++;
        }
        // copying into original 
        for(int i = 0; i<temp.size();i++){
            arr[i+low] = temp[i];
        }
        
    }
    void mergeSort(vector<int>&arr,int low,int high,int &count){
        // base case
        if(low<high){
        int mid = low+((high-low)/2);
        mergeSort(arr,low,mid,count);
        mergeSort(arr,mid+1,high,count);
        merge(arr,low,mid,high,count);
        }
    }
  public:
    // Function to count inversions in the array.
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        int n = arr.size();
        int count = 0;
        // vector<int>temp = arr;
        mergeSort(arr,0,n-1,count);
        return count;
    }
};
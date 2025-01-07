// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/majority-vote

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

// approach 1 -> check for all ele and count freq
// approach 2 -> use hashmap and store freq and chek
// approach 3 -> moore's voting algo
//approach 4 -> sort and check for majority ele
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        // approach 2
        /*
        int n = arr.size();
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        int limit = n/3;
        vector<int>res;
        for(auto it:mp){
            if(it.second>limit){
                res.push_back(it.first);
            }
        }
        return res;
        */
       // using moores voting algo
        int n = arr.size();
        if(n == 0) return {};
        int count1 = 0;
        int count2 = 0;
        int ele1 = arr[0];
        int ele2 = INT_MIN;
        
        for(int i = 0 ; i<n; i++){
            if(count1 == 0 && arr[i] != ele2){
                ele1 = arr[i];
                count1++;
            }
            else if(count2 == 0 && arr[i] != ele1){
                ele2 = arr[i];
                count2++;
                // cout<<ele2<<count2<<endl;
            }
            else if(arr[i] == ele1){
                count1++;
            }
            else if(arr[i] == ele2){
                // cout<<ele2<<endl;
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        // checking 
        // cout<<ele1<<endl;
        // cout<<ele2<<endl;
        vector<int>res;
        int limit = n/3;
        count1 = 0;
        count2 = 0;
        for(int i = 0; i<n;i++){
            if(arr[i] == ele1) count1++;
            else if(arr[i] == ele2) count2++;
        }
        if(count1>limit) res.push_back(ele1);
        if(count2>limit) res.push_back(ele2);
        
        // sorting the answer
        sort(res.begin(),res.end());
        return res;
    }
};
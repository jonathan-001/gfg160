
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/find-h-index--165609

// brute force
// use two loops if elements greater than or equal to 
// present element increase if more than element value
// could be potentially answer
// have to take the maximum element

//[5,4,2,1,1] sort(reverse)
// freq[arr[i]]++;
// freq[arr[i]] += count; // count = 0
// count++; // have to hande duplicates
// if freq[ele]>1(dup) run till other ele
// and add count once

// iterate again mp to find the element

// 8 12 10 12 9 12  -->6
// 12 12 12 10 9 8 
// have to take the freq[maxele] of and same logic

class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        // reverse sort the array
        sort(citations.begin(),citations.end(),greater<int>());
        // unordered_map<int,int>mp;
        int maxe = citations[0];
        vector<int>freq(maxe+1,0);
        int n = citations.size();
        int count = 0;
        
        for(int i = 0;i<n;i++){
            freq[citations[i]] = i+1;
            // if(i-1>=0){
            //     freq[citations[i]] +=(freq[citations[i-1]]);
            // }
            // if(freq[citations[i]]>1){
            //     freq[citations[i]]++;
            //     continue;
            // }
            // freq[citations[i]] += count;
            // count++;
        }
        int ans = -1;
        int prev = -1;
        // iterating freq
        
        for(int i = maxe;i>=0;i--){
            if(freq[i] >= i || prev >= i){
                ans = i;
                break;
            }
            if(freq[i] != 0){
                prev = freq[i];
            }
        }
        // for(int i = 0 ; i<n;i++){
            
        //     if(mp[citations[i]] >= citations[i]){
        //         ans  = citations[i];
        //         break;
        //     }
        //     // if(mp[citations[i]].first >= mp[citations[i]].second){
        //     //     ans = citations[i].first;
        //     //     break;
        //     // }
        // }
        return ans;
    }
};
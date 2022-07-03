#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{   ////first approach using hashmaps
    set<int> s;
    map<int,int>mp;
    int n = arr.size();
   int counter = n/3+1;
   for(int i=0;i<n;i++){
       mp[arr[i]]++;
       if(mp[arr[i]]>=counter){
           s.insert(arr[i]);
       }
   }
   vector<int> ans;
    for(auto i:s){
        ans.push_back(i);
    }
    return ans;
}
#include <bits/stdc++.h>
int uniqueElement(vector<int> arr, int n)
{   ////////using maps
// 	map<int,int>mp;
//     for(int i=0;i<n;i++){
//         mp[arr[i]]++;
//     }
//     int ans;
//     for(auto i:mp){
//         if(i.second==1)
//            return i.first;
//     }
///////
    for(int i=0;i<arr.size();i++){
        if((arr[i]!=arr[i-1])&&arr[i]!=arr[i+1]){
            return arr[i];
        }
    }
}

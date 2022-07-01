#include <bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	///using sets
//     set<int> s;
//     for(int i=0;i<n;i++){
//         s.insert(arr[i]);
//     }
//     return s.size();
////using counter
//     int c=0;
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<arr.size()-1;i++){
//         if(arr[i+1]==arr[i])c++;
//     }
//     return arr.size()-c;
    int c=0;
    for(int i=0;i<arr.size();i++){
        if(i<arr.size()-1&&arr[i]==arr[i+1])continue;
        else arr[c++]=arr[i];
    }
    return c;
}
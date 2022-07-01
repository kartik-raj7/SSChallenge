// #include <bits/stdc++.h> 
// int findMajorityElement(int arr[], int n) {
// 	map<int,int>mp;
//     for(int i=0;i<n;i++){
//         mp[arr[i]]++;
//     }
//     int k = INT_MIN;
//     for(auto i:mp){
//         if(i.second>=n/2+1){
//             k = i.first;
//         }
//     }
//     if(k!=INT_MIN){
//         return k;
//     }
//     else return -1;
// }
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[5] = {2,3,9,2,2};
        int major = -1,ct=0;
        for(auto &i: nums)
        {
            if(ct == 0)
            {
                major = i;
                ct++;
            }
            else if(i == major) ct++;
            else ct--;
            cout<<major<<" "<<ct;
        }
        
    }
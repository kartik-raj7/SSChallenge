#include <bits/stdc++.h>
#define ll long long
#define test ll t; cin>>t; while(t--)
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int findDuplicate(vector<int> &arr, int n){
///First Approach
//         map<ll,ll>mp;
//         priority_queue<int> s;
//         loop(i,0,n){
//             mp[arr[i]]++;
//         }
//         for(auto i:mp){
//             if(i.second>1){
//                 return i.first;
//                 break;
//             }
//         }
////Second Approach
    int ans = -1;
    for(int i=0;i<n;i++){
        int num = abs(arr[i]);
        if(arr[num]<0){
            ans=num;
            break;
        }
        arr[num]*=-1;
    }
    return ans;
}

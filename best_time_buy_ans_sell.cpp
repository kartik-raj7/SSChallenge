#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    ///brute force approach///
    int ans = 0 , mini = prices[0];
    for(int i=1;i<prices.size();i++){
        int diff = prices[i]-mini;
        ans = max(ans,diff);
        mini = min(mini,prices[i]);
    }
    return ans;
//     int ans = 0;
//     for(int i=0;i<prices.size();i++){
//         for(int j=i+1;j<prices.size();j++){
//             if(prices[j]>prices[i]){
//                 ans = max(prices[j]-prices[i],ans);
//             }
//         }
//     }
//     return ans;
 /////////////
}
#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int n)
{   int k = 0;
    if(n==0||n==1)return arr;
    int i;
    for(i=n-2;i>=0;){
    if(arr[i]>arr[i+1])i--;
     else break;
}
 if(i>=0){
     int j = n-1;
     while(arr[j]<=arr[i])j--;
     swap(arr[i],arr[j]);
 }
 reverse(arr.begin()+i+1,arr.end());
 return arr;
}
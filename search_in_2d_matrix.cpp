#include <bits/stdc++.h> 
#include <vector>
#include <set>
bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target)
{   ////////brute force;
//     bool flag = false;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(mat[i][j]==target){
//                 flag = true;break;
//             }
//         }
//     }
//      return flag;
///////////////2nd approach
    bool flag = false;int c = 0;
    for(int i=0;i<m;i++){
        if(mat[i][0]<=target){
            c= i;
        }
    }
    for(int i=0;i<n;i++){
        if(mat[c][i]==target)flag = true;
    }
    return flag;
}
#include <bits/stdc++.h>
string reverseString(string str)
{   vector<string>strs;
    string temp = "";
    for(int i=0;i<str.size();i++){
        if(str[i]!=' '){
           temp+=str[i];
        }
        else{
            if(temp.size()!=0){
                strs.push_back(temp);
            }
            temp = "";
        }
    }
 if(temp.size()!=0){
        strs.push_back(temp);
    }
    temp="";    
    for(int i=strs.size()-1;i>0;i--){
        temp+=(strs[i]);
        temp+=' ';
    }
    temp+=strs[0];
    return temp;
//    reverse(strs.begin(),strs.end());
//     for(int i=0;i<strs.size();i++){
// //         swap(strs[i],strs[strs.size()-i]);
//           cout<<strs[i]<<endl;
//     return str;
}
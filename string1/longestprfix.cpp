#include <bits/stdc++.h>
string longestCommonPrefix(vector<string> &arr, int n)
{
    string common ="";
    int mini = INT_MIN;
    for(int i =0;i<n;i++){
        if(mini > arr[i].size()){
            mini = arr[i].size();
        }
    }
    for(int j=0;j<mini;j++){
        char key = arr[0][j];
        if(j!=0){
            common += arr[0][j-1]; 
        }for(int i=0;i<n;i++){
            if(arr[i][j]!= key){
                return common;
            }
        }
            
    }common += arr[0][mini-1];
    return common;
}

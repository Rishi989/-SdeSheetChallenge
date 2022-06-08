#include <bits/stdc++.h>
void subset(vector<int>& arr,set<vector<int>> &output,vector<int> ans,int n,int index){
    if(index == n){
        output.insert(ans);
        return;
    }subset(arr,output,ans,n,index+1);
    ans.push_back(arr[index]);
    subset(arr,output,ans,n,index+1);
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    set<vector<int>> output;
    vector<int> ans;
    sort(arr.begin(),arr.end());
    subset(arr,output,ans,n,0);
    vector<vector<int>> out;
    for(auto it =output.begin();it!=output.end();it++){
        out.push_back(*it);
    }return out;
}

#include <bits/stdc++.h>
void subset(vector<int>&arr,vector<vector<int>>& output,vector<int> ans,int n,int target,int index){
      if(target == 0){
          output.push_back(ans);
          return;
      }
      for(int i=index;i<n;i++){
          if(i>index && arr[i]==arr[i-1]) continue;
          if(target < arr[i]) break;
          ans.push_back(arr[i]);
          subset(arr,output,ans,n,target-arr[i],i+1);
          ans.pop_back();
      }
    }
    
    vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target) {
        vector<vector<int>> output;
        sort(arr.begin(),arr.end());
        vector<int> ans;
        subset(arr,output,ans,n,target,0);
        return output;
    }

#include <bits/stdc++.h>
void subset(vector<int> &num,vector<int> &output,int n,int sum,int index){
    if(index == n){
        output.push_back(sum);
        return;
    }subset(num,output,n,sum,index+1);
    subset(num,output,n,sum+num[index],index+1);
}

vector<int> subsetSum(vector<int> &num)
{
    vector<int> output;
    int n = num.size();
    subset(num,output,n,0,0);
    sort(output.begin(),output.end());
    return output;
}

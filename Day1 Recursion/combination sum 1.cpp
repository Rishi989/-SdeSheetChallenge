void subset(vector<int>& arr,vector<vector<int>> &output,vector<int> ans,int n,int k,int sum,int index){
    if(index ==n){
        if(sum == k){
            output.push_back(ans);
            return;
        }return;
    }subset(arr,output,ans,n,k,sum,index+1);
    ans.push_back(arr[index]);
    subset(arr,output,ans,n,k,sum+arr[index],index+1);
    
}


vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> output;
    vector<int> ans;
    subset(arr,output,ans,n,k,0,0);
    return output;
}

int uniqueElement(vector<int> arr, int n)
{
	int sum =arr[0];
    for(int i=1;i<n;i++){
        sum ^=arr[i];
    }return sum;
}

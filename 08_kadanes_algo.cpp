long long maxSubarraySum(int arr[], int n){
    if(n <= 0) return 0;
    int localSum  = arr[0];
    int globalSum = arr[0];
    for(int i = 1; i < n; i++)
    {
        localSum += arr[i];
        localSum = max(arr[i], localSum);
        globalSum = max(globalSum, localSum);
    }
    return globalSum;
}

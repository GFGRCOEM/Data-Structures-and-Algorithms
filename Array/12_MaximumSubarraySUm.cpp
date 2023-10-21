long long maxSubarraySum(int arr[], int n)
{
    long long maxsum = 0;
    int start = 0, last = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)    
        {
            start = i;
        }
        sum += arr[i];                       //add sum
        last = i;
        maxsum = max(maxsum, sum);            //comapre between maxsum and currentsum
        if (sum < 0)                             //if sum becomes negative ,restart counting
        {
            sum = 0;
        }
    }

    return maxsum;     //complexity O(n)
}
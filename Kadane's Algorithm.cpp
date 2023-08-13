class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long ans=0;
        long long sum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans+=arr[i];
            sum=max(ans,sum);
            if(ans<0)
                ans=0;
        }
        // if(sum<0)
        //     return -1;
        // else
            return sum;
        
    }
};

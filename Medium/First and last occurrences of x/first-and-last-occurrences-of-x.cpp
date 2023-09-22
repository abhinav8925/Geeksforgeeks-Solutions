//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int ar[], int n , int target )
    {
        // code here
        vector<int> v(2,-1);
        // int n = ar.size();
        int start = 0,end = n-1;
        int pos = INT_MAX ;
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            if(ar[mid]==target)
            {
                pos=mid;
                end = mid-1;
            }
            else if(ar[mid]>target)
                end = mid-1;
            else
                start = mid+1;
        }
        if(pos!=INT_MAX)
            v[0]=pos;
        start = 0,end = n-1;
        pos = INT_MAX ;
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            if(ar[mid]==target)
            {
                pos=mid;
                start = mid+1;
            }
            else if(ar[mid]>target)
                end = mid-1;
            else
                start = mid+1;
        }
        if(pos!=INT_MAX)
            v[1]=pos;
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
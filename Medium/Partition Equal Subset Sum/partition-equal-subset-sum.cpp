//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    bool f(int ind,int target,int a[],vector<vector<int>> &dp){
        
        if(ind<0)
            return 0;
        if(target<0)
            return 0;
        if(target==0)
            return 1;
        
        if(dp[ind][target] != -1)
            return dp[ind][target];
        
        int t = f(ind-1,target-a[ind],a,dp);
        int n = f(ind-1,target,a,dp);
        
        return dp[ind][target] = t||n;
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int tot = 0;
        tot = accumulate(arr,arr+N,0);
        
        if(tot%2!=0)
            return 0;
        
        int target = tot/2;
        
        vector<vector<int>> dp(N, vector<int> (tot+1,-1));
        
        return f(N-1,target,arr,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

const int mod = 1e9+7;
class Solution {
  public:
  
    
    int fib(int n, vector<int> &dp){
        
        if(n<=0)
            return 0;
        if(n==1)
            return 1;
        
        if(dp[n]!=-1)
            return dp[n];
        
        dp[n] = (fib(n-1,dp)%mod + fib(n-2,dp)%mod)%mod;
    
    
        return dp[n];
    }
    int nthFibonacci(int n){
        // code here
        
        vector<int> dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        
        fib(n,dp);
        
        return dp[n];
        
        return dp[]
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
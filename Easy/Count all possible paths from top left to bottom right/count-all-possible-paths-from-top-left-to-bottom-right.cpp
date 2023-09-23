//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

const int mod = 1e9+7;
#define ll long long int

class Solution {
  public:
  
    ll count(int row,int col,int m,int n,vector<vector<ll>> &dp){
        
        
        if(row == m  && col==n)
            return 1;
            
        if(row>m || col>n)
            return 0;
        
        
        
        if(dp[row][col]!=-1)
            return dp[row][col];
        
        
        return dp[row][col] =  (count(row+1,col,m,n,dp)%mod + count (row,col+1,m,n,dp)%mod)%mod;
        
        
            
    
        
    }
    
    ll numberOfPaths(int m, int n){
        
        
        // code here
        
        vector<vector<ll>> dp(m+1,vector<ll> (n+1,0));
        
        int row=0,col=0;
        
        
        // return count (0,0,m-1,n-1,dp);


        dp[0][0]=1;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                if(i>0 && j>0)
                    dp[i][j] = ((dp[i-1][j])%mod + (dp[i][j-1])%mod)%mod;
                else
                    dp[i][j]=1;
                    
            }
        }
        
        return dp[m-1][n-1];
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
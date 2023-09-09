//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++


#define ll long long int
class Solution
{
    public:
    //Function to find total number of unique paths.
    ll count(int row,int col,int m,int n,vector<vector<ll>> &dp){
        
        
        if(row == m  && col==n)
            return 1;
            
        if(row>m || col>n)
            return 0;
        
        
        
        if(dp[row][col]!=-1)
            return dp[row][col];
        
        
        return dp[row][col] =  (count(row+1,col,m,n,dp) + count (row,col+1,m,n,dp));
    
    }
    int NumberOfPath(int m, int n)
    {
        //code here
        vector<vector<ll>> dp(m+1,vector<ll> (n+1,-1));
        
        int row=0,col=0;
        
        
        return count (0,0,m-1,n-1,dp);
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends
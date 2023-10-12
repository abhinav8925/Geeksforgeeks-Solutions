//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends
// Complete this function

#define ll long long int

    ll solve(int coins[],int N,int sum, vector<vector<ll>> &dp){
        
        if(sum<0 || N<=0)
            return 0;
        
        if(sum==0)
            return 1;
        
        
        if(dp[N-1][sum] != -1)
            return dp[N-1][sum];
        
        ll take = solve(coins,N,sum-coins[N-1],dp);
        ll ntke = solve(coins,N-1,sum,dp);
    
        dp[N-1][sum] = take + ntke;
        
        return take + ntke;
        
    }
long long int count(long long int n)
{
	long long int table[n+1],i;
	memset(table, 0, sizeof(table));
	table[0]=1;                 // If 0 sum is required number of ways is 1.
	
	// Your code here
	
	int coins[3] = {3,5,10};
	int N = n;
	vector<vector<ll>> dp(4,vector<ll> (n+1,-1));
	
	return solve(coins, 3,n,dp);
}

//{ Driver Code Starts.



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends
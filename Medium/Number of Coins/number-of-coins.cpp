//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	 int solve(vector<int> &coins, int n, int sum, vector<vector<long long int>> &dp) {
        if (sum == 0) {
            return 0;
        }
        if (n == 0) {
            return INT_MAX - 1;
        }
        if (dp[n][sum] != -1) {
            return dp[n][sum];
        }
        if (coins[n - 1] <= sum) {
            dp[n][sum] = min(1 + solve(coins, n, sum - coins[n - 1], dp), solve(coins, n - 1, sum, dp));
        } else {
            dp[n][sum] = solve(coins, n - 1, sum, dp);
        }
        return dp[n][sum];
    }
	int minCoins(vector<int> &coins, int M, int V) 
	{ 
	    // Your code goes here
	     vector<vector<long long int>> dp(M + 1, vector<long long int>(V + 1, -1));

        int result = solve(coins, M, V, dp);

        return (result == INT_MAX - 1) ? -1 : result;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        vector<int> coins(m);
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
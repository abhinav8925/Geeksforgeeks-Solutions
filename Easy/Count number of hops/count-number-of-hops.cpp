//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


const int mod = 1e9+7;
class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    
    long long  count(int n,vector<long long> &dp){
        if(n<=0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        if(n==3)
            return 4;
         
         
        if(dp[n]!=-1)
            return dp[n];
        
        dp[n] = (count(n-1,dp)%mod + count(n-2,dp)%mod + count(n-3,dp)%mod)%mod;
        
        return dp[n];
    }
    long long countWays(int n)
    {
        
        // your code here
        
        vector<long long > dp(n+1,-1);
        
        
        
        // count (n,dp);
        
        return count(n,dp);
        
    }
    
    
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends
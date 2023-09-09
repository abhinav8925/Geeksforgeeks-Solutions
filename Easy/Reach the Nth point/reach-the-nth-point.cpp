//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends



const int mod = 1e9+7;
class Solution{
	public:
	
	int che(int n,vector<int> &dp){
	    if(n<=0)
	        return 0;
	    if(n==1)
	        return 1;
	    if(n==2)
	        return 2;
	    if(dp[n]!=-1)
	        return dp[n];
	   
	    dp[n] = ((che(n-1,dp)%mod)+che(n-2,dp)%mod)%mod;
	    
	    return dp[n];
	}
		int nthPoint(int n){
		    // Code here
		    
		    vector<int> dp(n+1,-1);
		    dp[0]=0;
		    dp[1]=1;
		    dp[2]=2;
		    
		    che(n,dp);
		    return dp[n];
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
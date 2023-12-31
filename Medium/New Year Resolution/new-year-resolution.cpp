//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution {
public:
    bool f(int ind, int n,int sum,int coins[], vector<vector<int>> &dp) {
        if(ind==n){
            if(sum && (sum%20==0 || sum%24==0  || sum==2024))
                return 1;
            return 0;
        }
        
        if(sum && (sum%20==0 || sum%24==0 || sum==2024))
                return 1;
                
        
        if(dp[ind][sum]!=-1)
            return dp[ind][sum];
            
        bool t = f(ind+1,n,sum+coins[ind],coins,dp);
        
        bool nt = f(ind+1,n,sum,coins,dp);
        
        return dp[ind][sum] = t||nt;
    }

    int isPossible(int n, int coins[]) {
        
        int sum = accumulate(coins,coins+n,0);
        
        vector<vector<int>> dp(n,vector<int> (sum+1,-1));
        
        return f(0,n,0, coins, dp);
    }
};

 
    

    





//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends
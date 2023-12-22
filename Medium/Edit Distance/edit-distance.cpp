//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution {
  public:
  int f(int i,int j,string &s,string &t,vector<vector<int>> &dp){
      if(i==0)
        return j;
      if(j==0)
        return i;
      
      if(dp[i][j]!= -1)
        return dp[i][j];
    
     if(s[i-1]==t[j-1])
        dp[i][j] = f(i-1,j-1,s,t,dp);
        
     else
       return   dp[i][j] = 1+min({f(i-1,j,s,t,dp),f(i,j-1,s,t,dp),f(i-1,j-1,s,t,dp)});
      
      
    
  }
    int editDistance(string s, string t) {
        // Code here
        if(s==t)
            return 0;
        
        int n1 = s.size();
        int n2 = t.size();
        
        int diff = abs(n1-n2);
        
        vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, -1));
        f(n1, n2, s, t, dp);
        return dp[n1][n2];
        
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
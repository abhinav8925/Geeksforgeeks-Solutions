//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  const int mod = 1e9+7;
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        int dp[n][m];
        

        dp[0][0]=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j]==0)
                    dp[i][j]=0;
                else if(i==0 && j==0)
                    dp[i][j]=1;
                else{
                    
                    int up=0;
                    int left=0;
                    
                    if(i>0){
                        up = ((dp[i-1][j])%mod);
                        
                    }
                    if(j>0)
                        left = ( (dp[i][j-1])%mod);
                        
                    dp[i][j] = (up+left)%mod;
                }
                
                    
            }
        }
        
        return dp[n-1][m-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends
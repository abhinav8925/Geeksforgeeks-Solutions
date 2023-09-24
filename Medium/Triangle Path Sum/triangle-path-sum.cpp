//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   int recFun(int i, int j, vector<vector<int>> &v, int n, vector<vector<int>> &dp) {
        if(i == n - 1) return v[i][j];
        
        if(dp[i][j]) return dp[i][j];
        
        return dp[i][j] = v[i][j] + min(recFun(i + 1, j, v, n, dp), recFun(i + 1, j + 1, v, n, dp));
    }

    int minimizeSum(int n, vector<vector<int>> &v) {
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        return recFun(0, 0, v, n, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> triangle;

        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j <= i; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            triangle.push_back(temp);
        }
        Solution obj;
        cout << obj.minimizeSum(n, triangle) << "\n";
    }
    return 0;
}
// } Driver Code Ends
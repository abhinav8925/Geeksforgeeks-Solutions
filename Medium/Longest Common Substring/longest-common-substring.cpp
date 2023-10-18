//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int f(string &s1, string &s2, int ind1, int ind2, vector<vector<int>>& dp, int& mx) {
    if (ind1 == 0 || ind2 == 0)
        return 0;

    if (dp[ind1][ind2] != -1)
        return dp[ind1][ind2];

    int result = 0;

    if (s1[ind1-1] == s2[ind2-1]) {
        result = 1 + f(s1, s2, ind1 - 1, ind2 - 1, dp, mx);
        mx = max(mx, result);
    }
    else
        dp[ind1][ind2] = 0;
    f(s1, s2, ind1 - 1, ind2, dp, mx);
    f(s1, s2, ind1, ind2 - 1, dp, mx);

    dp[ind1][ind2] = result;
    return result;
}

int longestCommonSubstr(string s1, string s2, int n, int m) {
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    int mx = 0;
     f(s1, s2, n, m, dp, mx);
    return mx;
}

};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
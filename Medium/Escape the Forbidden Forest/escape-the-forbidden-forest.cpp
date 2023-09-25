//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


// } Driver Code Ends
class Solution
{
    public:
    
    int solve(int n1,int n2,string &s1,string &s2,vector<vector<int>> &dp){
        
        if(n1<0 || n2<0){
            return 0;
        }
        
        if(dp[n1][n2] != -1)
            return dp[n1][n2];
        
        if(s1[n1] == s2[n2])
            return dp[n1][n2] = 1 + solve(n1-1,n2-1, s1, s2, dp);
        
        else
            return dp[n1][n2] = max(solve(n1,n2-1, s1, s2, dp), solve(n1-1,n2, s1, s2, dp));
        
        
    }
    int build_bridges(string str1, string str2)
    {
        // code here
        
        int n1 = str1.size();
        int n2 = str2.size();
        
        vector<vector<int>> dp(n1,vector<int> (n2,-1));
        
        return solve(n1-1,n2-1, str1,str2,dp);
        
    }
};

//{ Driver Code Starts.
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        string str1,str2;
        cin >> str1 >> str2;
        Solution obj;
        cout<<obj.build_bridges(str1,str2)<<endl;
    } 
    return 0;
} 

// } Driver Code Ends
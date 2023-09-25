//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int  solve(int i, int j, vector<vector<int>>& mat,vector<vector<int>> &dp){
        
        
        if(i<0 || i>=mat.size() || j<0 || j>=mat.size())
            return INT_MIN;
        
        if(i==mat.size()-1)
            return mat[i][j];
        
        
            
        if(dp[i][j] != -1)
            return dp[i][j];
        
        
        int left  = solve(i+1,j,mat,dp); 
        int down  = solve(i+1,j+1,mat,dp);
        int right = solve(i+1,j-1,mat,dp);
        
        return  dp[i][j] =  mat[i][j] +  max({left,down,right});
            
        
    }
    int maximumPath(int n, vector<vector<int>> mat)
    {
        // code here
        
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
    
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            
            ans = max(ans,solve(0,i,mat,dp));   
        }
        
        return ans;
            
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
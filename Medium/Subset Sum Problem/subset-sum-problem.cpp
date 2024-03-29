//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:

    int solve(int i, vector<int>&v, int sum,vector<vector<int>>&dp){
    if(i >= v.size()) return sum == 0;
    if(sum == 0) return 1;
    if(sum < 0) return 0;
    if(dp[i][sum] != -1) return dp[i][sum];
    bool a = solve(i+1,v,sum-v[i],dp);
    bool b = solve(i+1,v,sum,dp);
    return dp[i][sum] = a | b;
}
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        vector<vector<int>>dp(arr.size()+1,vector<int>(sum+1,-1));
        return solve(0,arr,sum,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends
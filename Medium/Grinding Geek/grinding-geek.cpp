//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int dp[1001][1001] ;
    
    int solve( int n , int total , vector<int>&cost )
    {
        if( n == 0 ) return 0 ;
        
        if( total == 0 ) return 0 ;
        
        if( dp[n][total] != -1 ) return dp[n][total] ;
        
        if( total >= cost[n-1] )
        {
            return dp[n][total] = max( solve( n-1 , total , cost ) , 1 + solve( n-1 , total - cost[n-1] + floor(cost[n-1]*0.9f) , cost )) ;
        }
        else{
            return dp[n][total] = solve( n-1 , total , cost ) ;
        }
          
    }
    int max_courses(int n, int total, vector<int> &cost)
    {
        //Code Here
        memset( dp , -1 , sizeof(dp) ) ;
        reverse( cost.begin() , cost.end() ) ;
        return solve( n , total , cost ) ;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.max_courses(n,k,arr)<<endl;
    }
}
// } Driver Code Ends
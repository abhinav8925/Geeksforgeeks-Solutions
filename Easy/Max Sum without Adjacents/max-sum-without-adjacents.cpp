//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	
	int f(int ind,int *arr,vector<int> &dp){
	    
	    if(ind==0)
	        return arr[0];
	    if(ind <0)
	        return 0;
	    
	    if(dp[ind] !=-1)
	        return dp[ind];
	   
	    int pc = arr[ind]+f(ind-2,arr,dp);
	    int npc = 0+f(ind-1,arr,dp);
	   
	    return dp[ind]=max(pc,npc);
	       
	}
	
	int findMaxSum(int *arr, int n) {
	    // code here
	    
	    vector<int> dp(n,-1);
	    
	   // return f(n-1,arr,dp);

        dp[0]=arr[0];
        for(int i=1;i<n;i++){
            int t = arr[i];
            if(i>1)
                t+=dp[i-2];
            
            int nt = 0+dp[i-1];
            dp[i] = max(t,nt);
        }
        return dp[n-1];

	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
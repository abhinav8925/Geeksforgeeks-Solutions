//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */


class Solution{
    bool dfs(int s, int n, int a[], int p, int k, vector<int> &vis) {
        if(!k) return true;
        
        for(int j=0; j<n; j++) {
            if(vis[j]) continue;
            if(s + a[j] < p) {
                vis[j] = 1;
                if(dfs(s + a[j], n, a, p, k, vis)) return true;
                vis[j] = 0;
            }
            else if(s + a[j] == p) {
                vis[j] = 1;
                if(dfs(0, n, a, p, k - 1, vis)) return true;
                vis[j] = 0;
            }
        }
        return false;
    }
  public:
    bool isKPartitionPossible(int a[], int n, int k) {
         int sum = 0;
         for(int i=0; i<n; i++) sum += a[i];
         
         if(sum % k) return false;
         vector<int> vis(n);
         
         return dfs(0, n, a, sum / k, k, vis);
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
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}
// } Driver Code Ends
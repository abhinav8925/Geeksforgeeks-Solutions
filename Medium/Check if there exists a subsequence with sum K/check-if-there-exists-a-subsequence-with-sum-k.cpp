//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    bool comb(int ind,int curs,int n, vector<int> a,int sum){
        
        if(ind==n){
            if(sum == curs){
                return 1;
            }
            else
                return 0;
        }
        
        if(curs>sum)
            return false;
        
        curs+=a[ind];
        if(comb(ind+1,curs,n,a,sum))
            return 1;
        
        curs-=a[ind];
        if(comb(ind+1,curs,n,a,sum))
            return 1;
        
        return 0;
        
    }
    
    
    bool checkSubsequenceSum(int n, vector<int>& a, int k) {
        // Code here
        
        
        
        
        return comb(0,0,n,a,k);
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        bool ans = obj.checkSubsequenceSum(n, arr, k);
        cout<<( ans ? "Yes" : "No")<<"\n";
    }
    return 0;
}
// } Driver Code Ends
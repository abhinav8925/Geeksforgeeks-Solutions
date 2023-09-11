//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
    void comb(int ind, int n, int target, vector<int> &ds, vector<int> &a, vector<vector<int>> &ans) {
        
            if(target == 0){
                ans.push_back(ds);
                return;
            }   
            
            for(int i=ind;i<n;i++){
                if(i>ind && a[i]==a[i-1])   
                    continue;
                
                if(a[i] > target)
                    break;
                
                ds.push_back(a[i]);
                comb(i+1,n,target-a[i],ds,a,ans);
                ds.pop_back();
            }
        
        
    }
    
    vector<vector<int>> combinationSum2(vector<int> &a, int target) {
        // Write your code here
    
        int n = a.size();
        
        vector<int> ds;
        sort(a.begin(),a.end());
        
        vector<vector<int>> ans;
        
        comb(0,n,target,ds,a,ans);
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends
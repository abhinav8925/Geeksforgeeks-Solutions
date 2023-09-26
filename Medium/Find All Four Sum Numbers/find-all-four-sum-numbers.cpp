//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &a, int k) {
        // Your code goes here
        
        int n=a.size();
        vector<vector<int>> ans;
        
        sort(a.begin(),a.end());
        
        for(int i=0;i<n;i++){
            if(i>0 && a[i]==a[i-1])
                continue;
            
            for(int j=i+1;j<n;j++){
                if(j>i+1 && a[j]==a[j-1])
                    continue;
                
                
                int l=j+1;
                int r=n-1;
                
                while(l<r){
                    long long sum=a[i];
                    sum+=a[j];
                    sum+=a[l];
                    sum+=a[r];
                    
                    if(sum==k){
                        vector<int> temp={a[i],a[j],a[l],a[r]};
                        ans.push_back(temp);
                        l++;
                        r--;
                        
                        while(l<r  && a[l]==a[l-1])
                            l++;
                        
                        
                        while(l<r && a[r]==a[r+1])
                            r--;
                    }
                    else if(sum<k)
                        l++;
                    else
                        r--;
                }
            }
        }
        
        return ans;

    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


#define ll long long int

class Solution {
  public:
    long long int nthPosition(long long int n){
        // code here
        
        ll ans = 0;
        ll cnt = 0;
        
        while(n>0){
            cnt++;
            n/=2;
        }
        
        ans = pow(2,cnt-1);
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout<<ob.nthPosition(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
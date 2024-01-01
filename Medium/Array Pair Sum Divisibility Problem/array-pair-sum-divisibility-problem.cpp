//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> arr, int k) {
        // Code here.
        int n = arr.size(), cnt = 0;
        if (n % 2 != 0)
            return false;
        
        unordered_map<int, int> m;
        
        
        for (int i = 0; i < n; i++) {
            if(m.find(arr[i]%k)!=m.end()){
                cnt++;
                m.erase(arr[i]%k);
                continue;
            }
            if(m.find(k-arr[i]%k)!=m.end()){
                cnt++;
                m.erase(k-arr[i]%k);
                continue;
            }
            m[arr[i]%k]++;
        }
        
        return n/2==cnt;

    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends
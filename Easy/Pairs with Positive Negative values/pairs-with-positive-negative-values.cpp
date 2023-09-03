//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    vector<int> PosNegPair(int arr[], int n) {
     
        sort(arr, arr+n);
unordered_map<int, int> mp;
vector<int> v;

for (int i = 0; i < n; ++i) {
    mp[arr[i]]++;
}
for (int i = 0; i<n ; ++i) {
    if (mp[arr[i]]> 0 && mp[-arr[i]]>0){
        v.push_back(-arr[i]);
        v.push_back(arr[i]);
        mp[arr[i]]--;
        mp[-arr[i]]--;
    }
}
reverse(v.begin(), v.end());
return v;   
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0) cout << "0";

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
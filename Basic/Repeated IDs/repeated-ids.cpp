//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

vector<int> uniqueId(int a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> ans = uniqueId(a, n);
        for (it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends



vector<int> uniqueId(int a[], int n) {
    
     vector<int> result ;
    unordered_set<int>temp;
    
    for(int i=0 ; i<n ; i++)
      {
          if(temp.find(a[i]) == temp.end()) result.push_back(a[i]);
            temp.insert(a[i]);
      }

    return result ;
}
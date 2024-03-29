//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        
        
       stack<int> s;
       vector<int> res;
       for(int i=0;i<arr.size();i++)
       {
           if(s.empty())
           {
               s.push(arr[i]);
           }
           else if( (s.top()>=0 && arr[i]<0) || (s.top()<0 && arr[i]>=0)) {
                       
                       s.pop();
             }
           else{
               s.push(arr[i]);
           }
       }
       
       while(!s.empty())
       {
           int val=s.top();
           s.pop();
           res.push_back(val);
       }
       
       reverse(res.begin(),res.end());
       return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends
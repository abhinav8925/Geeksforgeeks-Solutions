//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string s, int k) {
        
        int n = s.size();
        stack<char> st;
        
        st.push(s[0]);
        int i=1;
        while(i<n){
            while(!st.empty() && st.top()>s[i] && k){
                st.pop();
                k--;
            }
            st.push(s[i]);
            i++;
        }
        
        while(k>0){
            st.pop();
            k--;
        }
        
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        int z=0;
        while(z<ans.size()){
            if(ans[z]=='0')
                z++;
            else
                break;
        }
        
        if(z == ans.size())
            return "0";
        
        return ans.substr(z);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends
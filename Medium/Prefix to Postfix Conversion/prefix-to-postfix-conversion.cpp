//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isOperand(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
        return 1;
        else return 0;
    }
  
    string preToPost(string pre_exp) {
        stack<string>st;
        for(int i=pre_exp.size()-1; i>=0; i--){
            if(isOperand(pre_exp[i])){
                st.push(string(1, pre_exp[i]));
            }else{
                string A=st.top();
                st.pop();
                string B=st.top();
                st.pop();
                st.push(A+B+pre_exp[i]);
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToPost(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends
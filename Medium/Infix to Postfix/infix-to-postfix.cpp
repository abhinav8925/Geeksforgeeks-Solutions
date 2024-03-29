//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    
    int prec(char ch){
        if(ch=='^')
            return 2;
        if(ch=='/' || ch=='*')
            return 1;
        if(ch=='+' || ch=='-')
            return 0;
        
        return -1;
    }
    string infixToPostfix(string s) {
        // Your code here
        
        string ans="";
        stack<char> st;
        int n  = s.size();
        for(int i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='1' && s[i]<='9')){
                ans+=s[i];
            }
            else if(s[i]=='(')
                st.push(s[i]);
            else if(s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    ans+=st.top();
                    st.pop();
                }
                if(!st.empty() && st.top()=='(')
                    st.pop();
                
            }
            else{
                while(!st.empty() && prec(st.top()) >=prec(s[i])){
                    ans+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        return ans;
         
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends
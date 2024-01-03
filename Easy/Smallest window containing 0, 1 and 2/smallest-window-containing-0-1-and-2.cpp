//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
        
        int n = s.size();
        // if (s.find('0') != string::npos || s.find('1') != string::npos || s.find('2') != string::npos) 
        //     return -1;
        
        
        int cz=0,co=0,ct=0,left=0,right=0;
        
        int mnl=INT_MAX;
        while(right<n){
            
            if(s[right]=='0')
                cz++;
            else if(s[right]=='1')
                co++;
            else if(s[right]=='2')
                ct++;
            
            while(cz>0 && co>0 && ct>0){
                mnl = min(mnl,right-left+1);
                
                if(s[left]=='0')
                    cz--;
                else if(s[left]=='1')
                    co--;
                else if(s[left]=='2')
                    ct--;
                
                left++;
            }
            right++;
        }
    
        
        return (mnl == INT_MAX) ? -1 : mnl;

    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution {
public:

    string rremove(string s) {
        
        string res="";
        int n = s.size();
        
        int i=0;
        while(i<n){
            char c=s[i];
            int fq=0;
            while(s[i]==c)
                fq++,i++;
            
            if(fq==1)
                res+=c;
        }
        if(res==s)
            return s;
        
        return rremove(res);
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends
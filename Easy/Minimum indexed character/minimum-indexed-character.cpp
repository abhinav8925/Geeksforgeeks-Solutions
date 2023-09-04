//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
	string printMinIndexChar(string s, string patt)
	{
	    // Code here
	    
	    unordered_map<char,int> m;
	    
	    
	    for(int i=0;i<patt.size();i++){
	        m[patt[i]]++;
	    }
	    string ans;
	    for(int i=0;i<s.size();i++){
	        if(m[s[i]]>=1){
	            ans=s[i];
	            return ans;
	        }
	    }
	    
	    return "$";
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
	return 0;
}
// } Driver Code Ends
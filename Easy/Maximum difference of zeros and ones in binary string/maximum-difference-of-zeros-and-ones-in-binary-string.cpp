//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string s)
	{
	    // Your code goes here
	    
	    int n = s.size();
	    int curs=0;
	    int mxms=-1;
	    
	    for(int i=0;i<n;i++){
	        int ele;
	        if(s[i]=='0')
	            ele=1;
	        else
	            ele=-1;
	           
	       curs+=ele;
	       mxms = max(mxms,curs);
	       if(curs<0)
	        curs=0;
	            
	    }
	    return mxms;
	    
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}

// } Driver Code Ends
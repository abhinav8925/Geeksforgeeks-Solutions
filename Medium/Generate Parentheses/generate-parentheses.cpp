//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    
    void rec(int open,int close, int n, vector<string> &ans, string ds){
        if(open==n && close==n){
            ans.push_back(ds);
            return;
        }
        if(open<n){
            rec(open+1,close,n,ans,ds+'(');
        }
        if(close<open){
            rec(open,close+1,n,ans,ds+')');
        }
        return;
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        
        vector<string> ans;
        rec(0,0,n,ans,"");
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends
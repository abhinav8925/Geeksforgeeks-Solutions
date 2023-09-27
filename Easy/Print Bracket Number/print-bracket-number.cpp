//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	vector<int> bracketNumbers(string s)
	{
	    // Your code goes here
	    stack<int> st;
    int k = 0;
    vector<int> res;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            k++;
            st.push(k);
            res.push_back(k);
	    } else if (s[i] == ')') {
	        res.push_back(st.top());
            st.pop();
        }
    }
    return res;
	}
};

//{ Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		vector<int> ans = ob.bracketNumbers(s);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends
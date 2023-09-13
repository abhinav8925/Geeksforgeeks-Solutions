//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	   unordered_map<char,int> um;
        for(int i=0;i<s.size();i++)
        {
            um[s[i]]++;
            
        }
        vector<int> v;
        for(auto x:um)
        {
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        
        if(v[v.size()-1]-v[0]==0)
            return(1);
        if((v[v.size()-1]-v[0]==1 )&& (v[v.size()-1]!=v[v.size()-2]))
            return(1);
        if(v[0]==1 && v[1]==v[v.size()-1])
            return(1);
        
        return(0);
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends
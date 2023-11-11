//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string a, string b)
    {
        
        // Your code here
        if(a.size()!=b.size())
            return false;
        map<char,char> m;
        set<char> s;
        
        int n=a.size();
        
        for(int i=0;i<n;i++){
            if(m.count(a[i])==0 && s.count(b[i])==0){
                m[a[i]]=b[i];
                s.insert(b[i]);
            }
            else if(m.count(a[i])==0 && s.count(b[i]) >0)
                return false;
            else if(m[a[i]]!=b[i])
                return false;
        }
        
        return true;
        
        
    }
};


//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends
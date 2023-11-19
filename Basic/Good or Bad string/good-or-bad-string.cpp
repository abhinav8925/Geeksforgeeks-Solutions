//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isGoodorBad(string s) {
        // code here
    
          
      int vol=0,cons=0;
    
      for(int i=0;i<s.length();i++)
      {
          if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
           { cons=0; vol+=1; }
          else if(s[i]=='?')
           { cons+=1; vol+=1;}
          else 
            { vol=0; cons+=1; }
          
          if(vol>5 || cons>3)
          return 0;
      }
      
      return 1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        
        cin >> S;
        
        Solution ob;
        cout << ob.isGoodorBad(S) << endl;
    }
    return 0; 
}
// } Driver Code Ends
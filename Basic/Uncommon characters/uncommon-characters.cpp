//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
             vector<bool>astr(26,false);
          vector<bool>bstr(26,false);
          
          for(int i=0;i<A.length();i++){
              astr[A[i]-'a']=true;
          }
          
          for(int i=0;i<B.length();i++){
              bstr[B[i]-'a']=true;
          }
          string str="";
          for(int i=0;i<26;i++){
              if(astr[i]!=bstr[i]){
                  str+='a'+i;
              }
          }
         if(str=="")
         return "-1";
         
         return str;

        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string s){
        // code here 
        
        int n=s.size();
        
        int cnt=0,ans=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='[')
                cnt++;
            else if(s[i]==']'){
                cnt--;
                if(cnt<0)
                    ans-=cnt;
                
            }
        }
        
        return abs(ans);
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
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
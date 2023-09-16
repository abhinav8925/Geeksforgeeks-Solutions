//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:


    void solve(int ind, int n, string ds,string s,vector<string> &ans){
        
        if(ind==n){
            ans.push_back(ds);
            return;
        }
        if(ind == 0){
            solve(ind+1,n,ds+s[ind],s,ans);
        }
        
        else{
            solve(ind+1,n,ds+' '+s[ind],s,ans);
            solve(ind+1,n,ds+s[ind],s,ans);
        }
    }
    
    vector<string> permutation(string s){
        // Code Here
        
        
        
        vector<string> ans;
        
        string ds="";
        int n = s.size();
        
        solve(0,n,ds,s,ans);
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends
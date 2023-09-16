//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    vector<int> ans;
    vector<int> jugglerSequence(int n){
        // code here
        
        ans.push_back(n);
        
        if(n==1)
            return ans;
        
        if(n%2==0){
            int val = pow(n,0.5);
            return  jugglerSequence(val);
        }
        else{
            int val = pow(n,1.5);
            return jugglerSequence(val);
        }
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
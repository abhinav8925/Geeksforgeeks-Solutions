//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
        
        int cntz=0;
        int cnt=0;
        
        for(int i=0;i<n-1;i++){
            if(arr[i]==0)
                cntz++;
            if(arr[i]!=0 && arr[i+1]==0)
                cnt++;
        }
        
        if(arr[n-1]!=0)
            cnt++;
        if(arr[n-1]==0)
            cntz++;
        
        if(cntz==0)
            return -1;
        
        
        return cnt;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
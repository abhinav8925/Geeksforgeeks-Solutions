//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void sumt(int ind,int sum,int n,vector<int> a,vector<int> &ds){
     
        
        if(ind>=n)  {
            ds.push_back(sum);
            return;
        } 
        
        sumt(ind+1,sum+a[ind],n,a,ds);
        
        sumt(ind+1,sum,n,a,ds);
        
        
    }
    vector<int> subsetSums(vector<int> a, int n)
    {
        // Write Your Code here
        
        vector<int> ans;
        
        sumt(0,0,n,a,ans);
        
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
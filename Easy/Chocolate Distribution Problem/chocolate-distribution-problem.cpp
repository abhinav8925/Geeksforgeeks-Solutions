//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define ll long long int

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    
            
            sort(a.begin(),a.end());
            
            ll s=0;
            ll e=m-1;
            
            ll ans =INT_MAX;
            
            for(ll i=e;i<n;i++){
                ll cur = a[i]-a[s];
                
                s++;
                
                ans= min(ans,cur);
            }
            
            return ans;
    
    
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends
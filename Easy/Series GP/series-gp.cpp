//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	const int mod = 1e9+7;
   	int Nth_term(int a, int r, int n){
   	    // Code here
   	    
   	    int N=n-1;
   	    
   	    if(N==0)
   	        return a%mod;
   	    
   	    long long res=1;
   	    while(N>0){
   	        if(N%2==1)
   	            res = (res*r)%mod;
   	        
   	        r = (1LL*r*r)%mod;
   	        N/=2;
   	    }
   	    
   	    return (a*res)%mod;
   	    
   	    
   	    
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, r, n;
		cin >> a >> r >> n;
		Solution ob;
		int ans = ob.Nth_term(a, r, n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends
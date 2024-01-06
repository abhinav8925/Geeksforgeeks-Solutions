//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    

	int sumOfPowers(int a, int b){
	    // Code here
	    int ans=0;
	    
	    for(int i=a;i<=b;i++){
	        int cur=i;
	        while(cur%2==0){
	            ans++;
	            cur/=2;
	        }
	        for(int j=3;j*j<=cur;j+=2){
	            while(cur%j==0){
	                ans++;
	                cur/=j;
	            }
	            
	        }
	        if(cur>1)   
	            ans++;
	    }
	    
	    return ans;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
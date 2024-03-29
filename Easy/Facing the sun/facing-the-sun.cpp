//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Returns count buildings that can see sunlight
	int countBuildings(int a[], int n) {
	    // code here
	    
	    int cnt=1;
	    
	    int mx=a[0];
	    
	    for(int i=1;i<n;i++){
	        if(a[i]>mx){
	            cnt++;
	            mx=a[i];
	        }
	        
	    }
	    return cnt;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int h[n];
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        Solution ob;
        auto ans = ob.countBuildings(h, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
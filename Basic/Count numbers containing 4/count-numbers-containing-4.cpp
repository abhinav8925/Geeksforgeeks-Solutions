//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    bool isp(int n){
        while(n>0){
            if(n%10 ==4)
                return true;
            n/=10;
        }
        return false;
    }
    int countNumberswith4(int N) {
        // code here
        
        
        
        int cnt=0;
        for(int i=1;i<=N;i++){
            if(isp(i))
                cnt++;
                
        }
        
        return cnt;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countNumberswith4(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
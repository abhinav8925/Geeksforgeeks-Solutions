//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


#define ll long long int


class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        
        priority_queue<int> pq;
        
        for(int i=0;i<N;i++){
            pq.push(A[i]);
        }
        
        ll ans=0;
        while(K--){
            ll cnt = ceil(pq.top()/2);
            ans += pq.top();
            pq.pop();
            pq.push(cnt);
            
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends
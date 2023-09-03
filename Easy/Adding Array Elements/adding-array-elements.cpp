//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
        
        int cnt=0;
        
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
        
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        
        while(pq.size()>=2 && pq.top()<k){
            
            cnt++;
            int a=pq.top();pq.pop();
            int b=pq.top();pq.pop();
            
            int sum=a+b;
            pq.push(sum);
            
        }
        
        
        if(pq.top()>=k)
            return cnt;
        
        return -1;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        int ans = obj.minOperations(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


#define ll long long int


class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
   long long minCost(long long arr[], long long n) {

        priority_queue <long long,vector<long long>,greater<long long> > pq;
        for(int i=0;i<n;i++) {
            pq.push(arr[i]);
        }
        
        long long ans=0;
        while(pq.size() > 1) {
            long long f = pq.top();
            pq.pop();
            long long s = pq.top();
            pq.pop();
            long long sum = f+s;
            pq.push(sum);
            ans += sum;
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#define ll long long int

class Solution {
  public:
  int solve(int mid,int n,int arr[],int k){
      int sum=0;
      int cnt=1;
      for(int i=0;i<n;i++){
                sum+=arr[i];
          
          if(sum>mid){
              cnt++;
              sum=arr[i];
          }
          
      }
      return cnt<=k;
  }
    int splitArray(int arr[] ,int n, int k) {
        // code here
        
        ll sum = accumulate(arr,arr+n,0);

        ll low = *max_element(arr,arr+n);;
        ll high = sum;
        
        
        ll ans = 0;
        
        while(low<=high){
            
            int mid = (low+high)/2;
            if(solve(mid,n,arr,k)){
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
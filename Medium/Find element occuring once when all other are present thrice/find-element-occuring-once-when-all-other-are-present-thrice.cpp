//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        int ans=0,cnt;
       long  mask= (1L<<31);
        for(int bit=31;bit>=0;bit--){
             cnt=0;
            for(int i=0;i<N;i++){
                if(mask & arr[i]){
                    cnt++;
                }
            }
            if(cnt%3){
                ans+=mask;
            }
            mask=(mask>>1);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int a[], int n)
    {
        // Your code here
        
        unordered_map<int,int> mp;
        
        mp[0]=0;
        
        int len = 0;
        for(int i=0;i<n;i++){
            if(a[i]==0)
                a[i]=-1;
        }
        
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            
            if(mp.find(sum)!=mp.end()){
                len = max(len,i+1-mp[sum]);
            }
            else
                mp[sum]=i+1;
        }
        
        return len;
        
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
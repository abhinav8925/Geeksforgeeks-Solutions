// Problem Link ->  https://practice.geeksforgeeks.org/problems/frequency-game/1


//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++



class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        map<int,int> m;
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        
        int freq=INT_MAX,ans2=0;
        for(auto &it:m)
        {
            freq=min(freq,it.second);
            
            if(it.second==freq)
            {
                ans2=max(ans2,it.first);
            }
        }
        
        return ans2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends

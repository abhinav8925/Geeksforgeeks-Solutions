//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
string solve(string arr, int count, int k)
    {
            int N=arr.length();
            if(count>k-1)return arr;
            int index1=-1;
           for(int i=N-2; i>=0; i--)
           {//break point
               if(arr[i]<arr[i+1])
               {
                   index1=i;
                   break;
               }
           }
           
           if(index1==-1)
           {
               reverse(arr.begin(),arr.end());
               return arr;
           }
           
           for(int i=N-1; i>index1; i--)
           {
               if(arr[i]>arr[index1])
               {
                   swap(arr[index1],arr[i]);
                   break;
               }
           }
           reverse(arr.begin()+index1+1,arr.end());
           return solve(arr,count+1,k);
    }
    string kthPermutation(int n, int k)
    {
        // code here
        string temp="";
        for(int i=1; i<=n; i++)
        {
            temp+=to_string(i);
        }
        int count=1;
        string ans=solve(temp,count,k);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
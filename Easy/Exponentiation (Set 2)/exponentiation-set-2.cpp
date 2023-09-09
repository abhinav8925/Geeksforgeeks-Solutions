//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    long long int power(int a, long long int b) { 
        //complete the function here
          int mod = 1e9+7;
        
        if (b == 0) {
            return 1;
        }
            
        if (b == 1) {
            return a;
        }
            
        long long int mid = b / 2;
            
        long long int c = power(a, mid);
            
        if (b % 2 == 0) {
            return (c * c) % mod;
        } 
        
        else {
            return (((c * c) % mod) * a) % mod;
        }
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.power(a, b) << endl;
    
    }
    return 0; 
} 



// } Driver Code Ends
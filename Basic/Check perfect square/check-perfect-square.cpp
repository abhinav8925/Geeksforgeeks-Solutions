//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int checkPerfectSquare(int N){
        // code here 
         int ans=0;
        if(N==1)
        return 1;
        if(N==0)
        return 0;
        for(int i=1;i<N/2;i++){
            if(i*i==N){
            return 1;
            }
        else if(i*i>N){
            return 0;
         }
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
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkPerfectSquare(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
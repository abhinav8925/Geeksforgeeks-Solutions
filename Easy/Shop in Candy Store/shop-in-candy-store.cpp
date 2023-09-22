//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
     int m = 0;
        int s = 0;
        sort(candies, candies+N);
        int j = N;
        for(int i=0;i<j;i++)
        {
            s+=candies[i];
            j-=K;
        }
        j = -1;
        for(int i=N-1;i>j;i--)
        {
            m+=candies[i];
            j+=K;
        }
        return {s,m};
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends
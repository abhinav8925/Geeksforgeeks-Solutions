//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


#define ll long long int
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int a[], int n)
    {
        //Your code here
        
        unordered_map<int,int> m;
        ll sum=0;
        
        int cnt=0;
        
        // int sum=0;
        m[0]++;
        for(int i=0;i<n;i++){
            sum+=a[i];
            
            if(m.find(sum-0)!=m.end())
                return 1;
            
            m[sum]++;
        }
        
        return 0;
        
        
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        // Your code here
        
        string ans="";
        
        for(int i=0;i<n;i++){
            if(i==n-1 && sum>9)
                return "-1";
            if(sum>=9){
                ans+='9';
                sum-=9;
            }
            else{
                if(sum){
                    ans+=to_string(sum);
                    sum-=sum;
                }
                else if(sum==0)
                    ans+='0';
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}
// } Driver Code Ends
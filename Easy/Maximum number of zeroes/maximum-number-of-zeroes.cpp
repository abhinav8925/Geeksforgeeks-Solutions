//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int countdigit(string s){
	    int count = 0;
	   for(int i  =0; i<s.size(); i++){
	       if(s[i] == '0') count++;
	   } 
	   return count;
	}
    	string MaxZero(string a[],int n)
    	{
    	    
    	        int  max_count = 0;
    string ans;
    
    for(int i = 0; i<n; i++){
        int count = countdigit(a[i]);
        
    	if(count > max_count){
    	    max_count =  count;
    	    ans = a[i];
    	   }
    	   
    	 if(count ==  max_count){
    	    if(a[i].size()>=ans.size() and a[i]>ans) 
    	        ans = a[i];
    	   }
    	  }
    	  return  max_count == 0 ? "-1":ans;  
    	
    	}
};
	 

//{ Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    string a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    

      

        Solution ob;
        cout << ob.MaxZero(a,n) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends
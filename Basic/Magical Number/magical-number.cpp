//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 
int binarySearch(int arr[], int low, int high);
int main()
{
	int test =0; 
	cin>>test;
	while(test--)
	{
	    int n, i; 
	    cin>>n; 
	    int a[n]; 
	    for(i=0; i<n; i++)
	    cin>>a[i]; 
	    
	    cout<<binarySearch(a, 0, n-1)<<endl; 
	    
	   // cout<<"\n\n"; 
	}
	
}

// } Driver Code Ends


int binarySearch(int arr[], int low, int high)
{
      //add code here.
      
      int start = low;
    int end = high;
    
    int mid = start + (end-start)/2;
    while(start <= end)
    {
        if(arr[mid] == mid)
            return mid;
        else if(mid > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
            
        mid = start + (end-start)/2;
    }
    return -1;
}
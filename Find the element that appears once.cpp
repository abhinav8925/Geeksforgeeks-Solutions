//User function template for C++
class Solution{
public:	
	int search(int a[], int n){
	    //code
	    
	    /*int ans=0;
	    for(int i=0;i<N;i++){
	        ans^=A[i];
	    }
	    
	    return ans;*/
	    
	    int l=0,r=n-1;
	    
	    while(l<=r){
	        int mid=(l+r)/2;
	       
	        if(a[mid]!=a[mid-1] && a[mid]!=a[mid+1])
	            return a[mid];
	        if(mid%2 == 0)
	        {
	            if(a[mid] == a[mid+1])
	                l = mid+1;
	            else
	                r = mid-1;
	        }
	        else
	        {
	            if(a[mid] == a[mid-1])
	                l = mid+1;
	            else
	                r = mid-1;
	        }
	    }
	    
	}
};

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > a, int n, int m) {
        	    // code here
	
	        int ans=0;
	        
	        int r=0,col=m-1;
	        
	        while(r<n && col>=0){
	            if(a[r][col]==1){
	                ans=r;
	                col--;
	            }
	            else
	                r++;
	        }
	        
	        if(col==m-1)
	            return -1;
	        return ans;
	}

};

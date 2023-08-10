class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& a, int n) {
	    // code here   
	    
	    
        

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(a[i][j],a[j][i]);
            }
        }

        int p=n/2;
        int s=0,t=n-1;
        while(p--){
                for(int j=0;j<n;j++){
                    swap(a[s][j],a[t][j]);
                }
            s++;
            t--;
        }
	}

};

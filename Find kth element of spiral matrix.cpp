class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		
 		 int ans=a[0][0];

        int cnt=0;
        int sr=0,sc=0,er=n-1,ec=m-1;
        while(cnt<k){

            for(int i=sc;i<=ec && cnt<k;i++){
                ans=a[sr][i];
                cnt++;
            }
            sr++;

            for(int i=sr;i<=er && cnt<k;i++){
                ans=a[i][ec];
                cnt++;
            }
            ec--;

            for(int i=ec;i>=sc && cnt<k;i--){
                ans=a[er][i];
                cnt++;
            }
            er--;

            for(int i=er;i>=sr && cnt<k;i--){
                ans=a[i][sc];
                cnt++;
            }
            sc++;
            
        }

        // for(int )
        
        return ans;
    }
};

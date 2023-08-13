class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > m, int r, int c) 
    {
        // code here 
        vector<int> v;
        int sr=0,sc=0,er=r-1,ec=c-1;
        
        int ele=r*c,cnt=0;
        
        while(cnt<ele){
            
            for(int i=sc;i<=ec && cnt<ele;i++){
                v.push_back(m[sr][i]);
                cnt++;
            }
            sr++;
        
            for(int i=sr;i<=er && cnt<ele;i++){
                v.push_back(m[i][ec]);
                cnt++;
            }
            ec--;
            
            for(int i=ec;i>=sc && cnt<ele;i--){
                v.push_back(m[er][i]);
                cnt++;
            }
            er--;
            
            for(int i=er;i>=sr && cnt<ele;i--){
                v.push_back(m[i][sc]);
                cnt++;
            }
            sc++;
        }
        return v;
    }
};

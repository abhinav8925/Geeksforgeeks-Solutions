class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > a, int n, int m, int x) 
    {
        // code here 
        
        int sr=0,sc=m-1;
        
        while(sr<n && sc>=0){
            if(a[sr][sc]==x)
                return 1;
            else if(a[sr][sc]>x)
                sc--;
            else
                sr++;
        }
        
        return 0;
    }
};

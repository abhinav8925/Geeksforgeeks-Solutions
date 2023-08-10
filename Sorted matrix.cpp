class Solution {
  public:
    vector<vector<int>> sortedMatrix(int n, vector<vector<int>> a) {
        
        
        // code here
        
        vector<int> v;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v.push_back(a[i][j]);
            }
        }
        
        sort(v.begin(),v.end());
        
        int ind=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=v[ind++];
            }
        }
        
        return a;
    }
};

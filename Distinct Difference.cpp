class Solution {
public:
    vector<int> getDistinctDifference(int n, vector<int> &a) {
        // code here
        set<int> s;
        vector<int> l(n),r(n),ans(n);
        
        for(int i=0;i<n;i++){
            l[i]=s.size();
            s.insert(a[i]);
        }
        s.clear();
        for(int i=n-1;i>=0;i--){
            r[i]=s.size();
            s.insert(a[i]);
        }
        
        for(int i=0;i<n;i++){
            ans[i]=(l[i]-r[i]);
        }
        return ans;
    }
};

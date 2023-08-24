    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int mx=a[n-1];
        vector<int> v;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=mx){
                mx=a[i];
                v.push_back(mx);
                
            }
        }
        reverse(v.begin(),v.end());
        
        return v;
    }
};

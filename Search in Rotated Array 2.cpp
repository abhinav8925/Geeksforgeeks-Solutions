class Solution {
  public:
    bool Search(int n, vector<int>& a, int key) {
        // Code here
        
        int l=0,h=n-1;
        
        while(l<=h){
            int mid=(l+h)/2;
            
            if(a[mid]==key)
                return 1;
            
            if(a[l]==a[mid] && a[mid]==a[h]){
                l++;
                h--;
                // continue;
            }
            else if(a[l]<=a[mid]){
                
                if(a[l]<=key && key<=a[mid])
                    h=mid-1;
                else
                    l=mid+1;
            }
            else{
                if(a[mid]<=key && key<=a[h])
                    l=mid+1;
                else
                    h=mid-1;
            }
        }
        
        return 0;
    }
};

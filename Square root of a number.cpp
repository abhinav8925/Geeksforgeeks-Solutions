// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int n) 
    {
        // Your code goes here   
        
        long long int l=0,r=n,ans=0;
        while(l<=r){
            long long int mid=(l+r)/2;
            
            if(mid*mid <=n){
                ans=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        
        return ans;
    }
};

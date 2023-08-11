//User function template for C++

class Solution
{
  public:
  bool check(int arr[],int n,int m,long long int mid){
      
      long long cnt=1,sum=0;
      
      for(int i=0;i<n;i++){
          if(sum+arr[i]<=mid){
              sum+=arr[i];
          }
          else{
              cnt++;
              
              if(cnt>m || arr[i]>mid)
                return 0;
            
            sum=arr[i];
          }
      }
      return 1;
  }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        
        long long ans=-1;
        long long sum=0;
        
        for(int i=0;i<n;i++)    
            sum+=arr[i];
        
        long long s=0,e=sum;
        
        while(s<=e){
            
            long long mid=(s+e)/2;
            
            if(check(arr,n,k,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        
        return ans;
    }
};

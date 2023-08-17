class Solution {
  public:
  
  bool ispossible(int mid, int arr[], int n,int k){
         
         int sm=0;
         int ct=1;
         for(int i=0; i<n; i++){
             sm+=arr[i];
             if(sm>mid){
                 ct++;
                 sm=arr[i];
             }
         }
         
         return (ct<=k);
      
  }
  
  
    int splitArray(int arr[] ,int n, int k) {
        
        
        int l=*max_element(arr,arr+n);
        
        int h=accumulate(arr,arr+n,0);
        
        
    
     int ans=0;
     
     while(l<=h){
         
         int mid=l+(h-l)/2;
         
         if(ispossible(mid,arr,n,k)){
             ans=mid;
             h=mid-1;
         }
         else{
             l=mid+1;
         }
     }
     
     return ans;
     
       
    }
};

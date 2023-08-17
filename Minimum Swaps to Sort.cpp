

class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    
	    
	        
    	int n=nums.size();
    	        vector<pair<int,int>> ans(n);
    	        
    	        
    	        
    	        for(int i=0;i<n;i++)
    	            ans[i]={nums[i],i};
    	            
    	            
    	        sort(ans.begin(),ans.end());
    	        
    	        int cnt=0;
    	        
    	        for(int i=0;i<n;i++){
    	            if(i==ans[i].second){
    	                continue;
    	                
    	            }
    	            else{
    	                swap(ans[ans[i].second],ans[i]);
    	                cnt++;
    	                i--;
    	            }
    	                
    	        }
	        
	        
	        return  cnt;
	}
};

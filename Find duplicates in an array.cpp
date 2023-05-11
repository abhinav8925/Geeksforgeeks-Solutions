// Problem Link -> https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            arr[arr[i]%n]+=n;
            
        }
        int f;
        for(int i=0;i<n;i++)
        {
            f=arr[i]/n;
            if(f>1)
                v.push_back(i);
        }
        if(v.size()==0)
            return {-1};
        else
            return v;
    }
};

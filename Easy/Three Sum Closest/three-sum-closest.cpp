//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution{
  public:
    int threeSumClosest(vector<int> a, int target) {
        // Your code goes here
        
        sort(a.begin(),a.end());
        int n=a.size();
        
        int ans1=INT_MAX,ans2=INT_MIN;
        
        for(int i=0;i<n-2;i++){
            int l=i+1,h=n-1;
            
            while(l<h){
                int sum=a[i]+a[l]+a[h];
                if(sum == target){
                    return sum;
                }
                else if(sum>target){
                    ans1=min(ans1,sum);
                    h--;
                }
                else{
                    ans2=max(ans2,sum);
                    l++;
                }
            }
        }
        
        int dif1 = abs(ans1-target);
        int dif2 = abs(ans2-target);
        
        if(dif1==dif2)
            return ans1;
        else if(dif1>dif2)
            return ans2;
        else
            return ans1;
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        Solution obj;
        cout << obj.threeSumClosest(vec, target) << "\n";
    }
}

//Position this line where user code will be pasted.

// } Driver Code Ends
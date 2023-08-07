// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        int left=0,right=0,mx=0,n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(')
                left++;
            else if(s[i]==')')
                right++;
            
            if(left==right){
                mx=max(mx,left*2);
            }
            else if(right>left){
                left=0,right=0;
            }
        }
        
        left=0,right=0;
        
        for(int i=n-1;i>=0;i--){
            if(s[i]=='(')
                left++;
            else if(s[i]==')')
                right++;
            
            if(left==right){
                mx=max(mx,left*2);
            }
            else if(right<left){
                left=0,right=0;
            }
        }
        
        return mx;
    }
};

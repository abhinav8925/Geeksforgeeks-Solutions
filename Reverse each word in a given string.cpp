class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        string ans = "";
        string word = "";
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            if (s[i] != '.') {
                word = s[i]+word;
            } else {
                ans = ans+word+'.';
                word = "";
            }
        }
        
        ans +=word;
        
        
        
        return ans;
    }
};

class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int a1[26]={0},a2[26]={0};
        for(int i=0;i<a.size();i++)
            a1[a[i]-'a']++;
        for(int i=0;i<b.size();i++)
            a2[b[i]-'a']++;
            
        
        for(int i=0;i<26;i++){
            if(a1[i]!=a2[i])
                return false;
        }
        return true;
        
    }

};

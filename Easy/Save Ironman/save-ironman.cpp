//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool saveIronman(string ch);


int main()
{
    int t,b,c,d,e,f,g,h;
    cin>>t;
    char cc;
    cc = getchar();
    
    while(t--)
    {
        string ch;
        getline(cin,ch);
        
        if(saveIronman(ch)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
}

// } Driver Code Ends



bool saveIronman(string ch)
{
    // Complete the function
    string s;
    for(int i=0;i<ch.length();i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        s+=(ch[i]+32);
        else if((ch[i]>='a' && ch[i]<='z' ) || (ch[i]>='0' && ch[i]<='9'))
        s+=ch[i];
    
        
    }
  int i=0;
  int j=s.length()-1;
  while(i<=j)
  {
      if(s[i]!=s[j])return 0;
      else
      {
      i++;
      j--;
      }
  }
    return 1;
    
}

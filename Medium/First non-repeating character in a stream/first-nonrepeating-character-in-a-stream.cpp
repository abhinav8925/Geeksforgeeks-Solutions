//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		    // Code here
		    
		    int a[26]={0};
		    queue<char> q;
		    string ans = "";
		    int n = s.size();
		    for(int i=0;i<n;i++){
		        a[s[i]-'a']++;
		        q.push(s[i]);
		        
		        while(!q.empty()){
		            if(a[q.front()-'a']==1){
		                ans+=q.front();
		                break;
		            }
		            else
		                q.pop();
		        }
		        if(q.empty())
		            ans+='#';
		        
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
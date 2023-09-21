//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        
         int binary_search(vector<int> arr, int m) {
            int low = 0, high = m-1, mid = 0;
            if(arr[high]==0) return 0;

            while(low<=high) {
                mid = (low+high)/2;
                if(arr[mid]==0)  low = mid+1;
                else high = mid-1;
                }
            return m-low;
            }
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            int idx = 0, max_count = 0;
            for(int i = 0; i < N; i++) {
                int count = binary_search(Mat[i], M);
                if(count>max_count) { idx = i; max_count = count; }
            }
            return idx;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends
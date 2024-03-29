//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    int calc(int val, vector<int> arr, int n)

    {

        for(int i=0; i<n; i++)

        {

            arr[i] = arr[i] - val;

        }

        int sum=0;

        for(int i=0; i<n; i++){

            if(arr[i]>0)sum+=arr[i];

        }

        return sum;

    }

    public:

    int find_height(int tree[], int n, int k)

    {

        int low = 0;

        int high = *max_element(tree, tree+n);

        int res=-1;

        vector<int>v;

        for(int i=0; i<n; i++)v.push_back(tree[i]);

        while(low<=high)

        {

            int mid = (low + high)/2;

            if(calc(mid, v, n)==k) return mid;

            else if(calc(mid, v, n)<k)

            {

                high = mid-1;

            }else if(calc(mid, v, n)>k){

                low = mid + 1;

            }

        }

        return res;

    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;
        Solution ob;
        cout<< ob.find_height(tree,n,k) << endl;
    }
    return 1;
}
// } Driver Code Ends
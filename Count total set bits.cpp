//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    
    
    int highpow(int n){
        int cnt=0;
        while(n>1){
            cnt++;
            n=n>>1;
        }
        
        return cnt;
    }
    int solve(int n)
    {
        // Your logic here
        
        if(n==0)
            return 0;
        
        int x=highpow(n);
        
        int bit =  (1 << (x-1)) * x;
        
        int rem = n - (1 << x) + 1;
        
        return bit + rem + solve(rem - 1);
        
    }
    
    int countSetBits(int n){
        return solve(n);
    }
};

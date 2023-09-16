class Solution:
    def func(self,n):
        if n < 1:
            return
        if n == 1:
            return 0
        if n == 2:
            return 1
        else:
            return self.func(n-2)**2 - self.func(n-1)
            
    def gfSeries(self, N):
        for i in range(1,N+1):
            print(self.func(i),end = ' ')
        print()

#{ 
 # Driver Code Starts
if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        N = int(input())
        
        obj = Solution()
        obj.gfSeries(N)

# } Driver Code Ends
//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG{

  public static void main (String[] args)  {
     Scanner s=new Scanner(System.in);
     int t=s.nextInt();
     while(t-->0){
         int n=s.nextInt();
         Solution obj = new Solution();
         System.out.println(obj.countWays(n));
     }

   }
}

// } Driver Code Ends




class Solution
{
    // function to count ways in which n can be
    // expressed as the sum of two or more integers
    int countWays(int n)
    {
    
         // your code here
         int[][] t = new int[n+1][n+1];
        int arr[] = new int[n];
        for(int i = 0; i < n-1; i++) {
            arr[i] = i+1;
        }
        int mod = 1000000007;
        for(int i = 0; i < n+1; i++) {
            for(int j = 0; j < n+1; j++) {
                if(i == 0 && j > 0) {
                    t[i][j] = 0;
                }
                if(j == 0){   
                    t[i][j] = 1;
                }
            }
        }   
        
        for (int i = 1; i < n + 1; i++) {
            for (int j = 0; j < n + 1; j++) {
               
                if (arr[i - 1] <= j) {
                    t[i][j] = (t[i][j - arr[i - 1]] % mod) + (t[i - 1][j] % mod);
                } else {
                    t[i][j] = t[i - 1][j] % mod;
                }
            }
        }
        return t[n][n] % mod;
    }
}

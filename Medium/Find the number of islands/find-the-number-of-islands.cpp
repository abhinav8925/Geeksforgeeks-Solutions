//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  private:
    void dfs(int row, int col, vector<vector<char>> &grid, vector<vector<bool>> &visited) {
        visited[row][col] = true;
        int n = grid.size();
        int m = grid[0].size();
        
        for(int delrow = -1 ; delrow <= 1; delrow++) {
            for(int delcol = -1; delcol <= 1; delcol++) {
                int nrow = row + delrow;
                int ncol = col + delcol;
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m
                && grid[nrow][ncol] == '1' && !visited[nrow][ncol]){
                    dfs(nrow,ncol,grid,visited);
                }
            }
        }
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n  = grid.size();
        int m = grid[0].size();
        
        vector<vector<bool>> visited(n, vector<bool>(m,false));
        int island = 0;
        for(int row = 0; row < n; row++) {
            for(int col = 0; col < m; col++){
                if(grid[row][col] == '1' && !visited[row][col]) {
                    island++;
                    dfs(row,col,grid,visited);
                }
            }
        }
        
        return island;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends
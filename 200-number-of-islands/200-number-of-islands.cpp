class Solution {
public:
    void dfs(int i, int j, vector<vector<char>>& grid){
        if(i < 0 || i >= grid.size() || j < 0 || j>=grid[0].size() || grid[i][j] == '0') return;
        grid[i][j] = '0';
        dfs(i+1, j, grid);
        dfs(i-1, j, grid);
        dfs(i, j+1, grid);
        dfs(i, j-1, grid);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int res = 0;
        int n = grid.size(), m = grid[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == '1'){
                    res++;
                    dfs(i, j, grid);
                }
            }
        }
        return res;
    }
};
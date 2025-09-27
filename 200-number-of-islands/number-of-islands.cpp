class Solution {
public:
    void bfs(int row,int col,vector<vector<char>>& grid,vector<vector<int>>& vis){
        int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};

        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for (int k = 0; k < 4; k++) {
                int nr = r + dx[k];
                int nc = c + dy[k];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                    grid[nr][nc] == '1' && !vis[nr][nc]) {
                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int c=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!vis[row][col] && grid[row][col] == '1'){ 
                    c++;
                    bfs(row,col,grid,vis);
                }
            }
        }
        return c;
    }
};

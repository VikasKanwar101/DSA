class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int i = grid.size();
        int j = (grid.empty() ? 0 : grid[0].size());
        vector<int> prev(j,0);
        for(int m = 0; m < i; m++) {
            vector<int> cur(j,0);
            for(int n = 0; n < j; n++) {
                if(m == 0 && n == 0)
                    cur[n] = grid[m][n];
                else {
                    int up = grid[m][n];
                    if(m > 0) up += prev[n];
                    else up = 1e9;
                    int left = grid[m][n];
                    if(n > 0) left += cur[n-1];
                    else left = 1e9;
                    cur[n] = min(up, left);
                }
            }
            prev=cur;
        }

        return prev[j-1];
    }
};

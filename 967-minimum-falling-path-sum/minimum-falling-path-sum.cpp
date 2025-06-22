class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));
        for(int j = 0; j < m; j++) {
            dp[0][j] = matrix[0][j];
        }
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int s = matrix[i][j] + dp[i-1][j]; 
                int ld = matrix[i][j] + (j > 0 ? dp[i-1][j-1] : 1e8); 
                int rd = matrix[i][j] + (j < m-1 ? dp[i-1][j+1] : 1e8); 
                dp[i][j] = min(s, min(ld, rd));
            }
        }
        int mini = 1e8;
        for(int j = 0; j < m; j++) {
            mini = min(mini, dp[n-1][j]);
        }
        return mini;
    }
};

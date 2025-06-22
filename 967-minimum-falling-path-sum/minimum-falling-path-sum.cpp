class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> prev(n,0);
        for(int j = 0; j < m; j++) {
            prev[j] = matrix[0][j];
        }
        for(int i = 1; i < n; i++) {
            vector<int> cur(n,0);
            for(int j = 0; j < m; j++) {
                int s = matrix[i][j] + prev[j]; 
                int ld = matrix[i][j] + (j > 0 ? prev[j-1] : 1e8); 
                int rd = matrix[i][j] + (j < m-1 ? prev[j+1] : 1e8); 
                cur[j] = min(s, min(ld, rd));
            }
            prev=cur;
        }
        int mini = 1e8;
        for(int j = 0; j < m; j++) {
            mini = min(mini, prev[j]);
        }
        return mini;
    }
};

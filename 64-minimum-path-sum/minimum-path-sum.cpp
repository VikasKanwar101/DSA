class Solution {
public:
    int f(int m,int n,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(m==0 && n==0)
        return grid[0][0];
        if(dp[m][n]!=-1)
        return dp[m][n];
        int up=INT_MAX;
        int left=INT_MAX;
        if(n>0)
        left=f(m,n-1,grid,dp)+grid[m][n];
        if(m>0)
        up=f(m-1,n,grid,dp)+grid[m][n];
        return dp[m][n]=min(left,up);
        }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return f(m-1,n-1,grid,dp);
    }
};

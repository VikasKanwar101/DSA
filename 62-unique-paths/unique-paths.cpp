class Solution {
public:
    int f(int m,int n,vector<vector<int>>&dp){
        if(m==0 && n==0)
        return 1;
        if(dp[m][n]!=-1)
        return dp[m][n];
        int up=0;
        if(m>0)
        up=f(m-1,n,dp);
        int left=0;
        if(n>0)
        left=f(m,n-1,dp);
        return dp[m][n]=up+left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return f(m-1,n-1,dp);
    }
};
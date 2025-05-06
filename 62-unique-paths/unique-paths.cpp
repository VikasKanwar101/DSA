class Solution {
public:
    int fp(int m,int n,int max1,int max2, vector<vector<int>> &dp)
    {
        int r,d;
        r=d=0;
        if(n>=max2 || m>=max1)
        return 0;
        if(m==(max1-1) && n==(max2-1))
        return 1;
        if(dp[m][n]!=-1) return dp[m][n];
        else
        return dp[m][n]=fp(m,n+1,max1,max2,dp)+ fp(m+1,n,max1,max2,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return fp(0,0,m,n,dp);
    }
};
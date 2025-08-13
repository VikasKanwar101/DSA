class Solution {
public:
    int f(int n,int a,vector<int>& coins,vector<vector<int>>& dp){
        if(n<0){
            if(a==0) return 1;
            return 0;
        }
        if(dp[n][a]!=-1) return dp[n][a];
        int pick=0;
        if(a>=coins[n])
        pick=f(n,a-coins[n],coins,dp);
        int notpick=f(n-1,a,coins,dp);
        return dp[n][a]=pick+notpick;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return f(n-1,amount,coins,dp);
    }
};
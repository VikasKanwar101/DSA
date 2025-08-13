class Solution {
public:
    int f(int n,int a,vector<int>& coins,vector<vector<int>>& dp){
        if(n==0){
            if(a%coins[n]==0) return a/coins[n]; 
            return 1e9;
        }
        if(dp[n][a]!=-1) return dp[n][a]; 
        int notpick=f(n-1,a,coins,dp);
        int pick=1e9;
        if(a>=coins[n])
        pick=1+f(n,a-coins[n],coins,dp);
        return dp[n][a]=min(pick,notpick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=f(n-1,amount,coins,dp);
        if(ans>=1e9) return -1;
        return ans;
    }
};
class Solution {
public:
    int f(int ind,int buy,int cap,vector<int>& prices,int& n,vector<vector<vector<int>>>& dp){
        if(ind==n || cap==0) return 0;
        if(dp[ind][buy][cap]!=-1) return dp[ind][buy][cap];
        int pick=1e9;
        int notpick=1e9;
        if(buy){
            pick=-prices[ind]+f(ind+1,0,cap,prices,n,dp);
            notpick=f(ind+1,1,cap,prices,n,dp);
        }
        else{
            pick=prices[ind]+f(ind+1,1,cap-1,prices,n,dp);
            notpick=f(ind+1,0,cap,prices,n,dp);
        }
        return dp[ind][buy][cap]=max(pick,notpick);
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(3,vector<int>(3,-1)));
        return f(0,1,2,prices,n,dp); 
    }
};

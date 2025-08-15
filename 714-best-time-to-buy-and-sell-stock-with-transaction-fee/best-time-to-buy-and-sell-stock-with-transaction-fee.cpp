class Solution {
public:
    int f(int ind,int buy,vector<int>& prices,int &n,vector<vector<int>>& dp,int fee){
        if(ind==n) return 0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        int take=1e9;
        int nottake=1e9;
        if(buy==1){
            take=-prices[ind]+f(ind+1,0,prices,n,dp,fee);
            nottake=f(ind+1,1,prices,n,dp,fee);
        }
        else{
            take=prices[ind]-fee+f(ind+1,1,prices,n,dp,fee);
            nottake=f(ind+1,0,prices,n,dp,fee);
        }
        return dp[ind][buy]=max(take,nottake);
    }
    int maxProfit(vector<int>& prices,int fee) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return f(0,1,prices,n,dp,fee);
    }
};
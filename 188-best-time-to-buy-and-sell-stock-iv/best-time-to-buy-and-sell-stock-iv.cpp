class Solution {
public:
    int f(int ind, int buy, int cap, vector<int>& prices, int n, vector<vector<vector<int>>>& dp) {
        if(ind == n || cap == 0) return 0;

        if(dp[ind][buy][cap] != -1) return dp[ind][buy][cap];

        int profit = 0;
        if(buy) {
            profit = max(-prices[ind] + f(ind + 1, 0, cap, prices, n, dp),
                         0 + f(ind + 1, 1, cap, prices, n, dp));
        } else {
            profit = max(prices[ind] + f(ind + 1, 1, cap - 1, prices, n, dp),
                         0 + f(ind + 1, 0, cap, prices, n, dp));
        }
        return dp[ind][buy][cap] = profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k+1, -1)));
        return f(0, 1, k, prices, n, dp);
    }
};
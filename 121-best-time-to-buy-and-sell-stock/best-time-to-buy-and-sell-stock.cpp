class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b,p,profit;
        p=profit=0;
        b=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            b=min(b,prices[i]);
            if(prices[i]>b)
            p=prices[i]-b;
            profit=max(profit,p);
        }
        return profit;
    }
};
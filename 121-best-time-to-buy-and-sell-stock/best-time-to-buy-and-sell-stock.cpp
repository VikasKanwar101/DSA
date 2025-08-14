class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int e=prices[0];
        int d;
        int maxd=0;
        for(int i=1;i<n;i++){
            if(e>=prices[i]){
                e=prices[i];
            }
            else{
                d=prices[i]-e;
                maxd=max(maxd,d);
            }
        }
        return maxd;
    }
};
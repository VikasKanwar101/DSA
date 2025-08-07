class Solution {
public:
    int rec(vector<int>& nums,int i,vector<int>& dp){
        if(i==0)
        return nums[i];
        if(i<0)
        return 0;
        if(dp[i]!=-1) 
        return dp[i];
        int p=rec(nums,i-2,dp)+nums[i];
        int np=rec(nums,i-1,dp);
        return dp[i]=max(p,np);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return rec(nums,nums.size()-1,dp);
    }
};
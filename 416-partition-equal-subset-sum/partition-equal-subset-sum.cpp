class Solution {
public:
    bool f(int n,int s,int k,vector<int>& nums,vector<vector<int>>& dp){
        if(n==0)
        return s+nums[n]==k;
        if(s==k)
        return true;
        if(dp[n][s]!=-1)
        return dp[n][s];
        bool pick=false;
        if(s+nums[n]<=k)
        pick=f(n-1,s+nums[n],k,nums,dp);
        bool notpick=f(n-1,s,k,nums,dp);
        return dp[n][s]=pick||notpick;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++){
            s=s+nums[i];
        }
        if(s%2!=0)
        return false;
        int k=s/2;
        vector<vector<int>>dp(n,vector<int>(k+1,-1)); 
        return f(n-1,0,k,nums,dp);
    }
};
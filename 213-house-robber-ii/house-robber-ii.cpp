class Solution {
public:
    int rec(vector<int>& nums,int i,vector<int>& dp,int e){
        if(i==e)
        return nums[i];
        if(i<e)
        return 0;
        if(dp[i]!=-1) 
        return dp[i];
        int p=rec(nums,i-2,dp,e)+nums[i];
        int np=rec(nums,i-1,dp,e);
        return dp[i]=max(p,np);
    }
    int rob(vector<int>& nums) {
        if (nums.size()==1) return nums[0];
        vector<int>dp1(nums.size(),-1);
        vector<int>dp2(nums.size(),-1);
        return max(rec(nums,nums.size()-1,dp1,1),rec(nums,nums.size()-2,dp2,0));
    }
};
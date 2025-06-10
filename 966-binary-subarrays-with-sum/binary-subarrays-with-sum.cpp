class Solution {
public:
    int s(vector<int>& nums, int goal)
    {
    int l=0;
    int sum=0;
    int c=0;
    int r=0;
    while(r<nums.size()){
        if(goal<0) return 0;
        sum=sum+nums[r];
        while(sum>goal){
            sum=sum-nums[l];
            l++;
        }
        c=c+r-l+1;
        r++;
    }
    return c;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return s(nums,goal)-s(nums,goal-1);
    }
};
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
        sum=sum+nums[r]%2;
        while(sum>goal){
            sum=sum-nums[l]%2;
            l++;
        }
        c=c+r-l+1;
        r++;
    }
    return c;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return s(nums,k) - s(nums,k-1);
    }
};
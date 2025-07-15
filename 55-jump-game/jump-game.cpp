class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mi;
        if(nums[0]==0 && nums.size()>1) return false;
        if(nums[0]==0 && nums.size()==1) return true;
        for(int i=0;i<nums.size()-1;i++){
            if(mi<i) return false;
            mi=max(mi,i+nums[i]);
        }
        if(mi>=nums.size()-1)
        return true;
        return false;
    }
};
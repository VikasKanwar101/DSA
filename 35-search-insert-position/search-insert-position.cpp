class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int j;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==target)
            return i;
        }
        for(j=0;j<nums.size()-1;j++){
            if(target<nums[j])
            break;
        }
        if(target>nums[nums.size()-1])
        return nums.size();
        return j;
    }
};
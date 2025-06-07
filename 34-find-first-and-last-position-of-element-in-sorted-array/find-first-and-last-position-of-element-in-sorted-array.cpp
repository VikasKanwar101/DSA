class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int f,l;
        f=l=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(f==-1) f=i;
                l=i;
            }
        }
        return {f,l};
    }
};
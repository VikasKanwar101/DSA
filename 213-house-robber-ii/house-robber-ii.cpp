class Solution {
public:
    int help(vector<int>& nums) {
        int cur,prev,prev2;
        prev2=0;
        prev=nums[0];
        for(int i=1;i<nums.size();i++){
            int take=nums[i];
            if(i>1) take=take+prev2;
            int nottake=prev;
            cur=max(take,nottake);
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> nums1,nums2;
        for(int i=0;i<nums.size();i++){
            if(i!=0) nums1.push_back(nums[i]);
            if(nums.size()-1!=i) nums2.push_back(nums[i]);
        }
        return max(help(nums1),help(nums2));
    }
};
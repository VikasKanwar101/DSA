class Solution {
public:
    int rob(vector<int>& nums) {
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
};
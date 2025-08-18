class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el,c;
        c=0;
        el=nums[0];
        for(int i=1;i<nums.size();i++){
            if(c<0) el=nums[i];
            if(nums[i]==el) c++;
            else c--;
        }
        return el;
    }
};
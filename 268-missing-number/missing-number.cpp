class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=nums.size();
        int sum=(s*(s+1))/2;
        int se=0;
        for(int i=0;i<s;i++){
            se=se+nums[i];
        }
        return sum-se;
    }
};
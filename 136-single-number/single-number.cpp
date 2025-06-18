class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorResult = 0;
        for (int num : nums) {
            xorResult ^= num; 
        }
        return xorResult;
    }
};

class Solution {
public:
    void rotate(vector<int>& nums, int r) {
        int l=nums.size();
        r=r%l;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+r);
        reverse(nums.begin()+r,nums.end());
    }
};
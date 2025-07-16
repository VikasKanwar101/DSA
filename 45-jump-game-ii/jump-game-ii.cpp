class Solution {
public:
    int f(int ind, vector<int>& nums, vector<int>& dp) {
        if (ind >= nums.size() - 1) return 0;
        if (dp[ind] != -1) return dp[ind];

        int mini = INT_MAX;

        for (int i = 1; i <= nums[ind]; i++) {
            if (ind + i < nums.size()) {
                int next = f(ind + i, nums, dp);
                if (next != INT_MAX) {
                    mini = min(mini, 1 + next);
                }
            }
        }

        return dp[ind] = mini;
    }

    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return f(0, nums, dp);
    }
};

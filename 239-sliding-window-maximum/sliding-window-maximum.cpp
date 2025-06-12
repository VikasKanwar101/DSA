class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        int l = 0, r = 0;

        while (r < nums.size()) {
            // Remove elements smaller than current from back
            while (!dq.empty() && nums[dq.back()] < nums[r]) {
                dq.pop_back();
            }

            dq.push_back(r);

            // Remove out-of-window elements from front
            if (dq.front() < l) {
                dq.pop_front();
            }

            // If window size is k, record max
            if (r - l + 1 >= k) {
                ans.push_back(nums[dq.front()]);
                l++;
            }

            r++;
        }

        return ans;
    }
};

class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n = nums.size() / 2;
        vector<int> left(nums.begin(), nums.begin() + n);
        vector<int> right(nums.begin() + n, nums.end());

        auto getSubsetSums = [&](vector<int>& arr) {
            unordered_map<int, vector<int>> mp;
            int sz = arr.size();
            for (int mask = 0; mask < (1 << sz); ++mask) {
                int sum = 0, cnt = 0;
                for (int i = 0; i < sz; ++i) {
                    if (mask & (1 << i)) {
                        sum += arr[i];
                        cnt++;
                    }
                }
                mp[cnt].push_back(sum);
            }
            for (auto& [_, vec] : mp)
                sort(vec.begin(), vec.end());
            return mp;
        };

        auto leftSums = getSubsetSums(left);
        auto rightSums = getSubsetSums(right);

        int total = accumulate(nums.begin(), nums.end(), 0);
        int ans = abs(total - 2 * accumulate(left.begin(), left.end(), 0)); // Worst case

        for (int k = 0; k <= n; ++k) {
            auto& l = leftSums[k];
            auto& r = rightSums[n - k];
            for (int x : l) {
                int target = total / 2 - x;
                auto it = lower_bound(r.begin(), r.end(), target);
                if (it != r.end())
                    ans = min(ans, abs(total - 2 * (x + *it)));
                if (it != r.begin()) {
                    --it;
                    ans = min(ans, abs(total - 2 * (x + *it)));
                }
            }
        }

        return ans;
    }
};

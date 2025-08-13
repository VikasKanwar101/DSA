#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int f(int n, int s, vector<int>& nums, int t, map<pair<int,int>, int>& dp) {
        if (n < 0) {
            return (s == t) ? 1 : 0;
        }

        if (dp.count({n, s})) return dp[{n, s}];

        int pos = f(n - 1, s + nums[n], nums, t, dp);
        int neg = f(n - 1, s - nums[n], nums, t, dp);

        return dp[{n, s}] = pos + neg;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        map<pair<int,int>, int> dp; // memoization map
        return f(n - 1, 0, nums, target, dp);
    }
};

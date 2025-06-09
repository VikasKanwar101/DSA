class Solution {
public:
    vector<int> getPrevSmallerCounts(const vector<int>& nums) {
        int n = nums.size();
        vector<int> prev(n);
        stack<int> s;
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && nums[s.top()] > nums[i]) s.pop();
            prev[i] = s.empty() ? i + 1 : i - s.top();
            s.push(i);
        }
        return prev;
    }
    vector<int> getNextSmallerCounts(const vector<int>& nums) {
        int n = nums.size();
        vector<int> next(n);
        stack<int> s;
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && nums[s.top()] >= nums[i]) s.pop();
            next[i] = s.empty() ? n - i : s.top() - i;
            s.push(i);
        }
        return next;
    }
    vector<int> getPrevGreaterCounts(const vector<int>& nums) {
        int n = nums.size();
        vector<int> prev(n);
        stack<int> s;
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && nums[s.top()] < nums[i]) s.pop();
            prev[i] = s.empty() ? i + 1 : i - s.top();
            s.push(i);
        }
        return prev;
    }
    vector<int> getNextGreaterCounts(const vector<int>& nums) {
        int n = nums.size();
        vector<int> next(n);
        stack<int> s;
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && nums[s.top()] <= nums[i]) s.pop();
            next[i] = s.empty() ? n - i : s.top() - i;
            s.push(i);
        }
        return next;
    }
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> prevSmaller = getPrevSmallerCounts(nums);
        vector<int> nextSmaller = getNextSmallerCounts(nums);
        vector<int> prevGreater = getPrevGreaterCounts(nums);
        vector<int> nextGreater = getNextGreaterCounts(nums);
        long long sumMax = 0, sumMin = 0;
        for (int i = 0; i < n; ++i) {
            long long maxContrib = (long long)nums[i] * prevGreater[i] * nextGreater[i];
            long long minContrib = (long long)nums[i] * prevSmaller[i] * nextSmaller[i];
            sumMax += maxContrib;
            sumMin += minContrib;
        }
        return sumMax - sumMin;
    }
};
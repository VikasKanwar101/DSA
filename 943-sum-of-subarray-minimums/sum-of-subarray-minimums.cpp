class Solution {
public:
    int mod = 1e9 + 7;
    vector<int> getPrevSmallerCounts(vector<int>& arr) {
        int n = arr.size();
        vector<int> prev(n);
        stack<int> s;
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && arr[s.top()] > arr[i])
                s.pop();
            prev[i] = s.empty() ? i + 1 : i - s.top();
            s.push(i);
        }

        return prev;
    }
    vector<int> getNextSmallerCounts(vector<int>& arr) {
        int n = arr.size();
        vector<int> next(n);
        stack<int> s;
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            next[i] = s.empty() ? n - i : s.top() - i;
            s.push(i);
        }

        return next;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> prev = getPrevSmallerCounts(arr);
        vector<int> next = getNextSmallerCounts(arr);
        long long total = 0;
        for (int i = 0; i < n; ++i) {
            long long contrib = (long long)arr[i] * prev[i] * next[i];
            total = (total + contrib) % mod;
        }
        return total;
    }
};

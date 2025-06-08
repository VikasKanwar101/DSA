class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> ngeMap; // stores next greater of each element
        stack<int> st;

        // Traverse nums2 from right to left
        for (int i = nums2.size() - 1; i >= 0; --i) {
            int curr = nums2[i];

            // Remove smaller elements from stack
            while (!st.empty() && st.top() <= curr) {
                st.pop();
            }

            // Assign next greater or -1
            if (st.empty()) {
                ngeMap[curr] = -1;
            } else {
                ngeMap[curr] = st.top();
            }

            st.push(curr);  // Push current element to stack
        }

        // Prepare answer for nums1 using ngeMap
        vector<int> result;
        for (int num : nums1) {
            result.push_back(ngeMap[num]);
        }

        return result;
    }
};

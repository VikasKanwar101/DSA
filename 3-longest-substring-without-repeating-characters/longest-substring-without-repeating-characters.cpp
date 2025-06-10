class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int mpp[256];  // Tracks last index of each char
    memset(mpp, -1, sizeof(mpp));  // Initialize all to -1
    int l = 0, r = 0, ml = 0;

    while (r < s.length()) {
        if (mpp[s[r]] != -1) {
            l = max(l, mpp[s[r]] + 1);  // Move 'l' past the last occurrence
        }
        mpp[s[r]] = r;  // Update last index
        ml = max(ml, r - l + 1);
        r++;
    }
    return ml;
}
};
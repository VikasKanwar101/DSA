class Solution {
public:
    void reverseString(vector<char>& s) {
        reverseHelper(s, 0, s.size());
    }

private:
    void reverseHelper(vector<char>& s, int i, int n) {
        if (i >= n/2) return;
        swap(s[i], s[n-i-1]);
        reverseHelper(s, i + 1, n);
    }
};

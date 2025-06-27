class Solution {
public:
    void backtrack(int open, int close, string curr, vector<string>& res) {
        if (open == 0 && close == 0) {
            res.push_back(curr);
            return;
        }
        if (open > 0)
            backtrack(open - 1, close, curr + "(", res);
        if (close > open)
            backtrack(open, close - 1, curr + ")", res);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(n, n, "", res);
        return res;
    }
};

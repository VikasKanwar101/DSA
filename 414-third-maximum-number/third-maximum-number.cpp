class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long f = LLONG_MIN, s = LLONG_MIN, t = LLONG_MIN;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (num == f || num == s || num == t) 
            continue;
            if (num > f) {
                t = s;
                s = f;
                f = num;
            } 
            else if (num > s) {
                t = s;
                s = num;
            } 
            else if (num > t) {
                t = num;
            }
        }
        return t == LLONG_MIN ? f : t;
    }
};

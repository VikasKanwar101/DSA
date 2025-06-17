class Solution {
public:
    void rec(int ind,vector<int> &nums,vector<int>&cur,vector<vector<int>>&r){
        if(ind==nums.size()){ 
        r.push_back(cur);
        return;
        }
        cur.push_back(nums[ind]);
        rec(ind+1,nums,cur,r);
        cur.pop_back();
        rec(ind+1,nums,cur,r);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> r;
        vector<int> cur;
        rec(0,nums,cur,r);
        return r;
    }
};
class Solution {
public:
    void rec(int ind,vector<vector<int>> &res,vector<int>& ds,vector<int>& nums){
        if(ind==nums.size()){
            res.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        rec(ind+1,res,ds,nums);
        ds.pop_back();
        while(ind + 1 < nums.size() && nums[ind] == nums[ind + 1])
           ind++;
        rec(ind+1,res,ds,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        vector<int> ds;
        rec(0,res,ds,nums);
        return res;
    }
};
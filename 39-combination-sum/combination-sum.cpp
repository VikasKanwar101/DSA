class Solution {
public:
    void rec(int ind,vector<int>& candidates,int target,vector<vector<int>>& res,vector<int>& ds){
        if(ind==candidates.size()){
            if(target==0)
            res.push_back(ds);
            return;
        }
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            rec(ind,candidates,target-candidates[ind],res,ds);
            ds.pop_back();
        }
        rec(ind+1,candidates,target,res,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;
        rec(0,candidates,target,res,ds);
        return res;
    }
};

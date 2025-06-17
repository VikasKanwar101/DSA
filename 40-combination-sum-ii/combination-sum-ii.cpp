class Solution {
public:
    void rec(int ind,vector<vector<int>> &res,vector<int> &ds,vector<int>& candidates,int target){
        if(ind==candidates.size()){
            if(target==0){
                sort(ds.begin(),ds.end());
                res.push_back(ds);
                sort(res.begin(),res.end());
            }
            return;
        }
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            rec(ind+1,res,ds,candidates,target-candidates[ind]);
            ds.pop_back();
        }
        int nextind=ind+1;
        while(nextind<candidates.size() && candidates[ind]==candidates[nextind])
        nextind++;
        rec(nextind,res,ds,candidates,target);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> ds;
        rec(0,res,ds,candidates,target);
        return res;
    }
};
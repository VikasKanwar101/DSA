class Solution {
public:
    void rec(int ind,vector<vector<int>> &res,vector<int> &ds,vector<int>& candidates,int target){
        if(target==0){
            res.push_back(ds);
            return;
        }
        for(int i=ind;i<candidates.size();i++){
            if(candidates[i]>target) 
            break;
            if(i>ind && candidates[i]==candidates[i-1]) 
            continue;
            ds.push_back(candidates[i]);
            rec(i+1,res,ds,candidates,target-candidates[i]);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> ds;
        rec(0,res,ds,candidates,target);
        return res;
    }
};
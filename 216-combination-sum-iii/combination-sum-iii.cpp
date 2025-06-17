class Solution {
public:
    void rec(int k,int n,vector<int> &ds,vector<vector<int>> &res,int ind){
        if(k==0 && n==0){
            res.push_back(ds);
            return;
        }
        for(int i=ind;i<=9;i++){
            if(i>n || k==0)
            break;
            ds.push_back(i);
            rec(k-1,n-i,ds,res,i+1);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int>ds;
        rec(k,n,ds,res,1);
        return res;
    }
};
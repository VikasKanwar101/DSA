class Solution {
public:
    void recur(vector<int> &ds,vector<vector<int>> &ans,vector<int> &map,vector<int>& nums)
    {
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(map[i]==0){
                ds.push_back(nums[i]);
                map[i]=1;
                recur(ds,ans,map,nums);
                map[i]=0;
                ds.pop_back();
            }
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> map(nums.size(),0);
        recur(ds,ans,map,nums);
        return ans;
    }
};
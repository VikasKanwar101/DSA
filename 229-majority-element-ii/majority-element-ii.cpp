class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> count;
        int min=(nums.size()/3)+1;
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
            if(count[nums[i]]==min)
            {
                ans.push_back(nums[i]);
                if(ans.size()==2)
                return ans;
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> count;
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
            if(count[nums[i]]>(nums.size()/3))
            {
                if(ans.size()==0)
                ans.push_back(nums[i]);
                if(ans.size()==1 && nums[i]!=ans.back())
                ans.push_back(nums[i]);
                if(ans.size()==2)
                return ans;
                count[nums[i]]=INT_MIN;
            }
        }
        return ans;
    }
};
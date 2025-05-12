class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ls=1;
        int c=1;
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<(nums.size()-1);i++)
        {
            if(nums[i]==(nums[i+1]-1))
            {
                c++;
                if(c>ls)
                ls=c;
            }
            else if(nums[i]==nums[i+1])
            continue;
            else
            c=1;
        }
        return ls;
    }
};
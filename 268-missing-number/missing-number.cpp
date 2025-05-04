class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=nums.size();
        int j=0;
        if(nums[0]==1)
        return 0;
        for(int i=0;i<s;i++)
        {
            j=i;
            if(i==(s-1))
            break;
            if(nums[i]==nums[i+1]-1)
            continue;
            else
            {
                if(i==(s-1))
                return i+1;
                else
                return i+1;
            }
           
        }
        return j+1;
    }
};
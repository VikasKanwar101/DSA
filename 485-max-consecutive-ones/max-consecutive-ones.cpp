class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c,m;
        c=m=0;
        int s=nums.size();
        for(int i=0;i<s;i++)
        {
            if(nums[i]==1){
                c++;
                m=max(c,m);
            }
            else c=0;
        }
        return m;
    }
};
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c,m;
        c=m=0;
        int s=nums.size();
        if(s==1)
        {
            if(nums[0]==1) return 1;
            else return 0;
        }
        for(int i=0;i<s;i++)
        {
            if(nums[i]==1)
            c++;
            if(c>m)
            m=c;
            if(i==s-1)
            break;
            if(nums[i+1]==0)
            c=0;
        }
        return m;
    }
};
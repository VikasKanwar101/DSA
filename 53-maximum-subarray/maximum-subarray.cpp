class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max=INT_MIN;
        int l=nums.size();
        for(int i=0;i<l;i++)
        {
            sum=sum+nums[i];
            if(sum>max)
            max=sum;
            if(sum<0)
            sum=0;
        }
        return max;
    }
};
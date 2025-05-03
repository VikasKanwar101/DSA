class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a,b,c,i;
        a=b=c=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            a++;
            if(nums[i]==1)
            b++;
            if(nums[i]==2)
            c++;
        }
        b=a+b;
        c=b+c;
        for(i=0;i<a;i++)
        nums[i]=0;
        for(i=a;i<b;i++)
        nums[i]=1;
        for(i=b;i<c;i++)
        nums[i]=2;
    }
};
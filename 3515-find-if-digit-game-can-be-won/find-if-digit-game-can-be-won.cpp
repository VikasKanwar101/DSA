class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int c,d;
        c=d=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10) 
            c=c+nums[i];
            else
            d=d+nums[i];
        }
        if(d>c || c>d)
        return true;
        else 
        return false;
    }
};
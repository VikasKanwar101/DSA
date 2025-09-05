class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l,r,len,ml;
        int z=0;
        l=r=ml=0;
        while(r<nums.size()){
            if(nums[r]==0){
                z++;
            }
            if(z>k){
                if(nums[l]==0){
                    z--;
                }
                l++;
            }
            len=r-l+1;
            ml=max(ml,len);
            r++;
        }
        return ml;
    }
};
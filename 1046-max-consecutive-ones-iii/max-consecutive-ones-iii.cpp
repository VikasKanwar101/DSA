class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxl,len,l,r,z;
        maxl=l=r=z=0;
        while(r<nums.size()){
            if(nums[r]==0) z++;
            if(z>k){
                if(nums[l]==0)
                z--;
                l++;
            }
            if(z<=k){
                len=r-l+1;
                maxl=max(maxl,len);
            }
            r++;
        }
        return maxl;
    }
};
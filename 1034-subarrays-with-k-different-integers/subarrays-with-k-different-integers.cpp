class Solution {
public:
    int s(vector<int>& nums, int k){
        int l,r,c;
        map<int ,int> mpp;
        l=r=c=0;
        while(r<nums.size()){
            if(k<1) return 0;
            mpp[nums[r]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0)
                mpp.erase(nums[l]);
                l++;
            }
            if(mpp.size()<=k)
            c=c+r-l+1;
            r++;
        }
        return c;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return s(nums,k)-s(nums,k-1);
    }
};
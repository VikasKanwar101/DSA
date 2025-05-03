class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low,mid,high,l;
        l=nums.size();
        low=mid=0;
        high=l-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid]==1)
            mid++;
            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
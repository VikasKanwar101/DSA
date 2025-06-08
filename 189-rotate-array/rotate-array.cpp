class Solution {
public:
    void rev(vector<int>& arr, int left, int right){
        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int r) {
        int l=nums.size();
        r=r%l;
        rev(nums,0,l-1);
        rev(nums,0,r-1);
        rev(nums,r,l-1);
    }
};
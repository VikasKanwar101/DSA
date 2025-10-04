class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int r=k%n;
        vector<int>temp(n);
        int m=n-r;
        for(int i=0;i<r;i++){
            temp[i]=nums[m];
            m++;
        }
        int a=0;
        for(int i=r;i<n;i++){
            temp[i]=nums[a];
            a++;
        }
        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }
    }
};
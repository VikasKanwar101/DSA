class Solution {
public:
    int jump(vector<int>& nums) {
        int j,l,r;
        j=l=r=0;
        while(r<nums.size()-1){
            int f=0;
            for(int i=l;i<=r;i++){
                f=max(f,i+nums[i]);
            }
            j++;
            l=r+1;
            r=f;
        }
        return j;
    }
};

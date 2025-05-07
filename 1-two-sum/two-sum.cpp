class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        int rem;
        int a;
        for(int i=0;i<nums.size();i++){
            a=nums[i];
            rem=target-a;
            if(m.find(rem)!=m.end()){
                return {m[rem],i};
            }
            m[a]=i;
        }
        return {0,0};
    }
};
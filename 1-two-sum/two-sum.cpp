class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        int rem;
        for(int i=0;i<nums.size();i++){
            rem=target-nums[i];
            if(m.find(rem)!=m.end()){
                return {m[rem],i};
            }
            m[nums[i]]=i;
        }
        return {0,0};
    }
};
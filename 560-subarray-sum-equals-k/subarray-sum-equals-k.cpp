class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int preSum=0;
        int cnt=0;
        for(int i=0;i<a.size();i++){
            preSum+=a[i];
            cnt+=mpp[preSum-k];
            mpp[preSum]+=1;
        }
        return cnt;
    }
};
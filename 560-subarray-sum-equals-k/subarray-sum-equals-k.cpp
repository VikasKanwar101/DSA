class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        map<int,int> mpp;
        mpp[0]=1;
        int preSum,cnt;
        preSum=cnt=0;
        for(int i=0;i<a.size();i++){
            preSum=preSum+a[i];
            cnt+=mpp[preSum-k];
            mpp[preSum]++;
        }
        return cnt;
    }
};
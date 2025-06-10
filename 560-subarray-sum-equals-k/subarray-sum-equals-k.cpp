class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
    map<int,int> mpp;
    mpp[0]=1;
    int ps=0; int c=0;
    for(int i=0;i<a.size();i++){
        ps+=a[i];
        int r=ps-k;
        c=c+mpp[r];
        mpp[ps]=mpp[ps]+1;
    }
    return c;
    }
};
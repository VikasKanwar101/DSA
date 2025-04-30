class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long a=1;
        vector<int> ans(rowIndex+1,1);
        if(rowIndex==0) return ans;
        for(int i=1;i<=rowIndex;i++)
        {
            a=a*(rowIndex-i+1);
            a=a/i;
            ans[i]=a;
        }
        return ans;
    }
};
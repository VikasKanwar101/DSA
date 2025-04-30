class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long n=1;
        vector<int> a;
        a.push_back(1);
        for(int j=1;j<=rowIndex;j++)
        {
            n=n*(rowIndex-j+1);
            n=n/j;
            a.push_back(n);
        }
        return a;
    }
};
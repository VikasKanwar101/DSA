class Solution {
public:
    vector<int> row(int i)
    {
        long long n=1;
        vector<int> a;
        a.push_back(1);
        for(int j=1;j<i;j++)
        {
            n=n*(i-j);
            n=n/j;
            a.push_back(n);
        }
        return a;
    }
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>p;
        if(numRows==1) return {{1}};
        p.push_back({1});
        p.push_back({1,1});
        for(int i=3;i<=numRows;i++)
        {
            p.push_back(row(i));
        }
        return p;
    }
};
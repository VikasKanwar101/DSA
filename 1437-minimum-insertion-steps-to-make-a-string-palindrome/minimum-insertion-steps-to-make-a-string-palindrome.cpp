class Solution {
public:
    int f(string &s,string &t,int m,int n,vector<vector<int>>& dp){
        if(m<0 || n<0) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        if(s[m]==t[n]) return dp[m][n]=1+f(s,t,m-1,n-1,dp);
        return dp[m][n]=max(f(s,t,m,n-1,dp),f(s,t,m-1,n,dp));
    }
    int minInsertions(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return n-f(s,t,n-1,n-1,dp);
    }
};
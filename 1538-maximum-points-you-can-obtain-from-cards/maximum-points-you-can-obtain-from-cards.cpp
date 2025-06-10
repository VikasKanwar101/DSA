class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int r,s1,s2,ms;
        r=cardPoints.size()-1;
        s1=s2=ms=0;
        for(int i=0;i<=k-1;i++)
            s1=s1+cardPoints[i];
        ms=s1;
        for(int i=k-1;i>=0;i--){
            s1=s1-cardPoints[i];
            s2=s2+cardPoints[r];
            ms=max(ms,s1+s2);
            r--;
        }
        return ms;
    }
};
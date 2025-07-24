class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ls,rs,ms,ri;
        ls=rs=ms=0;
        for(int i=0;i<k;i++){
            ls+=cardPoints[i];
        }
        ms=ls;
        ri=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            ls-=cardPoints[i];
            rs+=cardPoints[ri];
            ri--;
            ms=max(ms,ls+rs);
        }
        return ms;
    }
};
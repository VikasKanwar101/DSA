class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int m=0;
        for(int i=0;i<k;i++){
            m=m+cardPoints[i];
        }
        int maxi=m;
        int l=k-1;
        int r=cardPoints.size()-1;
        for(int i=0;i<k;i++){
            m=m-cardPoints[l];
            l--;
            m=m+cardPoints[r];
            r--;
            maxi=max(m,maxi);
        }
        return maxi;
    }
};
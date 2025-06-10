class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mpp;
        int l,r,ml;
        l=r=ml=0;
        while(r<s.length()){
            if(mpp.find(s[r])!=mpp.end())
            l=max(l,mpp[s[r]]+1);
            mpp[s[r]]=r;
            ml=max(ml,r-l+1); 
            r++;
        }
        return ml;
    }
};
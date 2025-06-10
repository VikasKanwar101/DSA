class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mpp;
        int l,r,ml;
        l=r=ml=0;
        while(r<s.length()){
            if(mpp.find(s[r])!=mpp.end())
            l=max(l,mpp[s[r]]+1);  //make sure l doesn't move in the backward direction
            mpp[s[r]]=r;   /*don't use else condition here because even if we find duplicate
                            letter in the substring we have to still update it in 
                            our substring and move the right pointer as well*/ 
            ml=max(ml,r-l+1); 
            r++;
        }
        return ml;
    }
};
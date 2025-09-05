class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[257];
        for(int i=0;i<257;i++) hash[i]=-1;
        int l,r,m;
        m=l=r=0;
        int maxi=0;
        while(r<s.length()){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            m=r-l+1;
            maxi=max(m,maxi);
            hash[s[r]]=r;
            r++;
        }
        return maxi;
    }
};
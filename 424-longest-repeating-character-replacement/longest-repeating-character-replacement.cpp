class Solution {
public:
    int characterReplacement(string s, int k) {
        int l,r,maxf,maxl;
        l=r=maxf=maxl=0;
        int hash[26]={0};
        while(r<s.length()){
            hash[s[r]-'A']++;
            maxf=max(maxf,hash[s[r]-'A']);
            if((r-l+1)-maxf > k){   //If length of substring - max freq of any char > k->trim
                hash[s[l]-'A']--;
                maxf=0;
                // for(int i=0;i<25;i++)
                // maxf=max(maxf,hash[i]);    //Update the value of maxf after trimming down
                l++;
            }
            if((r-l+1)-maxf <= k){
                maxl=max(maxl,r-l+1);
            }
            r++;
        }
        return maxl;
    }
};
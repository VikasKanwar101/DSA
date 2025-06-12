class Solution {
public:
    string minWindow(string s, string t) {
        int hash[256]={0};
        int n=t.size();
        int l,r,c;
        l=r=c=0;
        int si=-1;
        int minl=INT_MAX;
        for(int i=0;i<n;i++)
        hash[t[i]]++;
        while(r<s.length()){
            if(hash[s[r]]>0){
                c++;
            }
            hash[s[r]]--;
            while(c==t.length()){
                if(r-l+1<minl){
                    minl=r-l+1;
                    si=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) c--;
                l++;
            }
            r++;
        }
        return si==-1 ? "": s.substr(si,minl);
    }
};
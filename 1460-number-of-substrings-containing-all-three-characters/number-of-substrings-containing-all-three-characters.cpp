class Solution {
public:
    int numberOfSubstrings(string s) {
        int c=0;
        int hash[]={-1,-1,-1};
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']=i;
            if(hash[0]!=-1 && hash[1]!=-1 && hash[2]!=-1)
            c=c+1+min({hash[0],hash[1],hash[2]});
        }
        return c;
    }
};
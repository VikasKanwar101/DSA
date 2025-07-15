class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int l,r,c;
        l=r=c=0;
        while(l<g.size()  && r<s.size()){
            if(s[r]>=g[l]){
                c++;
                r++;
                l++;
            }
            else{
                r++;
            }
        }
        return c;
    }
};
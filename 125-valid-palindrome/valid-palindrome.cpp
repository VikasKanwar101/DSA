class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned="";
        for(char c:s){
            if(isalnum(c))
            cleaned+=tolower(c);
        }
        int n=cleaned.length()-1;
        return reverse(cleaned,0,n);
    }
    bool reverse(string &s,int left,int right){
        if(left>=right) return true;
        if(s[left]!=s[right]) return false;
        return reverse(s,left+1,right-1);
    }
};
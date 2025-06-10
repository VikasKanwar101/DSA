class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
        for(int i=0;i<num.size();i++){
            while(!s.empty() && k>0 && s.top()>num[i]){
                s.pop();
                k--;
            }
            s.push(num[i]);
        }
        while(k>0){
            s.pop();
            k--;
        }
        if(s.empty()) return "0";
        string ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        while(ans.size()!=0 && ans.back()=='0')
        ans.pop_back();
        reverse(ans.begin(),ans.end());
        if(ans.empty()) return "0";
        return ans;
    }
};
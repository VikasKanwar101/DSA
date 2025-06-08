class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int l=nums.size();
        vector<int> nge(l,-1);
        int m=(2*l)-1;
        for(int i=m;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%l]) st.pop();
            if(i<l){
                if(!st.empty()) nge[i]=st.top();
            }
            st.push(nums[i%l]);
        }
        return nge;
    }
};
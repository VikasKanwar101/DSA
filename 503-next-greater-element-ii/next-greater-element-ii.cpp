class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr){
        int n=arr.size();
        vector<int> nge(n,-1);
        stack<int> st;
        int i;
        for (int j=2*n-1;j>=0;j--){
            i=j%n;
            while (!st.empty() && st.top() <= arr[i]){
                st.pop();
            }
            nge[i] = st.empty() ? -1 : st.top();
            st.push(arr[i]);
        }
        return nge;
    }
};
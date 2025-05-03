class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int l=matrix.size();
        for(int i=0;i<l-1;i++)
        {
            for(int j=i+1;j<l;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<l;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int r=matrix.size();
    int c=0;
    int col0=1;
    if (r>0) 
    c=matrix[0].size();
    // int row[r]=0; --> matrix[..][0]
    // int col[c]=0; --> matrix[0][..]
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0]=0; //mark the ith row
                if(j!=0)
                matrix[0][j]=0; //mark the jth column
                else
                col0=0;
            }
        }
    }
    for(int i=1;i<r;i++)
    {
        for(int j=1;j<c;j++)
        {
            if(matrix[i][0]==0 || matrix[0][j]==0)
            matrix[i][j]=0;
        }
    }
    if(matrix[0][0]==0)
    for(int j=0;j<c;j++) matrix[0][j]=0;
    if(col0==0)
    for(int i=0;i<r;i++) matrix[i][0]=0;
    }
};
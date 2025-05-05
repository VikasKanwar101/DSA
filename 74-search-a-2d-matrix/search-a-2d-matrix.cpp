class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r,c;
        int n=0;
        int mid;
        int m=matrix.size();
        if (m>0) 
        n=matrix[0].size();
        int low=0;
        int high=(m*n)-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            r=mid/n;
            c=mid%n;
            if(matrix[r][c]==target)
            return true;
            else if(matrix[r][c]<target)
            low=mid+1;
            else
            high=mid-1;
        }
        return false;
    }
};
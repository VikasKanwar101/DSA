class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;
    int r=intervals.size();
    int f,e;
    sort(intervals.begin(),intervals.end());
    for(int i=0;i<r;i++)
    {
        f=intervals[i][0];
        e=intervals[i][1];
        if(!ans.empty() && e<=ans.back()[1])
        {
            continue;
        }
        else
        {
            for(int j=i+1;j<r;j++)
            {
                if(intervals[j][0]<=e)
                e=max(e,intervals[j][1]);
                else
                break;
            }
        }
        ans.push_back({f,e});
    }
    return ans;
    }
};
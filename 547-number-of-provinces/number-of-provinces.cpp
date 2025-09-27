class Solution {
public:
    void bfs(vector<vector<int>>&adj,int node,vector<int>& vis){
        queue<int>q;
        q.push(node);
        vis[node]=1;
        while(!q.empty()){
            int n=q.front();
            q.pop();
            for(int it:adj[n]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
        vector<vector<int>>adj(v);
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                }
            }
        }
        vector<int>vis(v,0);
        int c=0;
        for(int i=0;i<v;i++){
            if(vis[i]==0){
                c++;
                bfs(adj,i,vis);
            }
        }
        return c;
    }
};
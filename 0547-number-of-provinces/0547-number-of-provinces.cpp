class Solution {
public:
void bfs(int node,vector<int>adj[],vector<int>&vis){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            bfs(it,adj,vis);
        }
    }
}
    int findCircleNum(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                }
            }
        }
        vector<int> vis(n,0);
        int c=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                c++;
            
            bfs(i,adj.data(),vis);
        }
        }
        return c;
    }
};
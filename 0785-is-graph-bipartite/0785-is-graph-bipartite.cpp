class Solution {
public:
bool check(int st,int v,vector<vector<int>>&adj,vector<int>&color){
    queue<int>q;
    q.push(st);
     color[st]=0;
    
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto it:adj[node]){
            if(color[it]==-1){
                color[it]=1-color[node];
                q.push(it);
            }
            else if(color[it]==color[node])
            return false;
        }
        
    }
    return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int> color(v,-1);
        
        for(int i=0;i<v;i++){
            if(color[i]==-1){
                if(check(i,v,graph,color)==false)
                return false;
            }
        }
        return true;
    }
};
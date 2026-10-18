class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int V=numCourses;
        vector<vector<int>>adj(V);
        vector<int> indegree(V,0);
        for(auto &p:prerequisites){
            int a=p[0];
            int b=p[1];
            adj[b].push_back(a);
            indegree[a]++;
        }
                queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0) q.push(i);
        }
        vector<int>topo;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0) 
                q.push(it);
            }
        }
        if(topo.size()!=V) return {};
        return topo;
    }
};
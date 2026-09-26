class Solution {
public:
void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>&grid){
    queue<pair<int,int>>q;
    int n=grid.size();
    int m=grid[0].size();
    q.push({row,col});
    vis[row][col]=1;
    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){

                if(abs(i)+abs(j)!=1)
                    continue;
                int nr=r+i;
                int nc=c+j;
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]=='1' && !vis[nr][nc]){
vis[nr][nc]=1;
q.push({nr,nc});
                }
            }
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int c=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(grid [row][col]=='1' && !vis[row][col]){
                    c++;
                    bfs(row,col,vis,grid);
                }
            }
        }
        return c;
    }
};
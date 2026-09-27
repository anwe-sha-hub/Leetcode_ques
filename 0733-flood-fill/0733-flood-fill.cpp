class Solution {
public:
void bfs(int row,int col,vector<vector<int>>&image,vector<vector<int>>&ans,int delrow[],int delcol[],int init,int newcolor){
    int n=image.size();
    int m=image[0].size();
    ans[row][col]=newcolor;

    for(int i=0;i<4;i++){
        int nr=row+delrow[i];
        int nc=col+delcol[i];

        if(nr>=0 &&nr<n && nc>=0 && nc<m && image[nr][nc]==init && ans[nr][nc]!=newcolor){
            bfs(nr,nc,image,ans,delrow,delcol,init,newcolor);
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int init=image[sr][sc];
        vector<vector<int>>ans=image;
int delrow[]={-1,0,1,0};
int delcol[]={0,1,0,-1};
        bfs(sr,sc,image,ans,delrow,delcol,init,color);
        return ans;
    }
};
class Solution {
public:
int maxele(vector<vector<int>>& mat,int n,int m,int col){
    int maxi=-1;
    int ind=-1;
    for(int i=0;i<n;i++){
        if(mat[i][col]>maxi){
            maxi=mat[i][col];
            ind=i;
        }
    }
    return ind;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int st=0,end=m-1;

        while(st<=end){
            int mid=st+(end-st)/2;
int row=maxele(mat,n,m,mid);
            int left=mid-1>=0? mat[row][mid-1]:-1;
            int right=mid+1<m ? mat[row][mid+1]:-1;

            if(mat[row][mid]>left && mat[row][mid]>right) return {row,mid};
            else if(mat[row][mid]<left) end=mid-1;
            else st=mid+1;
        }
        return {-1,-1};
    }
    
};
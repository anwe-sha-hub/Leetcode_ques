class Solution {
public:
void fun(int ind,int n,int k,vector<int>&ds,vector<vector<int>>&ans){
    if(ds.size()==k){
        ans.push_back(ds);
        return;
    }
    for(int i=ind;i<=n;i++){
        ds.push_back(i);
        fun(i+1,n,k,ds,ans);
        ds.pop_back();
    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>ds;
        fun(1,n,k,ds,ans);
        return ans;
    }
};
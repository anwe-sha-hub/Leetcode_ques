class Solution {
public:
void solve(int n,string s,int o,int c,vector<string>&ans){
    if(s.size()==2*n){
        ans.push_back(s);
        return;
    }
    if(o<n){
        solve(n,s+"(",o+1,c,ans);
    }
    if(c<o){
        solve(n,s+")",o,c+1,ans);

    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        solve(n,"",0,0,ans);
        return ans;
    }
};
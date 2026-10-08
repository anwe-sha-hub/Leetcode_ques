class Solution {
public:
    string removeOuterParentheses(string s) {
        string st="";
        int c=0;
        for(int i=0;i<s.length();i++){
if(s[i]=='(') {
    if(c>0) st.push_back(s[i]);
    c++;
}
else{
    c--;
    if(c>0) st.push_back(s[i]);
}
        }
        return st;
    }
};
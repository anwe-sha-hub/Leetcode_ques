class Solution {
public:
    int minAddToMakeValid(string s) {
        int o=0,ans=0;

for(int i=0;i<s.length();i++){
    if(s[i]=='(') o++;
    else{
        if(o>0) o--;
        else ans++;
    }
}
return ans+o;
    }
};
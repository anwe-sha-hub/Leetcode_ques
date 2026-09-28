class Solution {
public:
    int maxDepth(string s) {
        int d=0;
        int maxi=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                d++;
                maxi=max(maxi,d);
            }
            else if(s[i]==')'){
                d--;
            }
        }
        return maxi;
    }
};
class Solution {
public:
    int minInsertions(string s) {
        int a=0,c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(c%2==1){
                    a++;
                    c--;
                }
                c+=2;
            }
            else{
                c--;
                if(c<0){
                    a++;
                    c=1;
                }
            }
        }
        return a+c;
    }
};
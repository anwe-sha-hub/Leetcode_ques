class Solution {
public:
    bool checkValidString(string s) {
        //two-pointers
        int low=0,high=0,i=0;
        while(i<s.length()){
            if(s[i]=='(') {
                low++;high++;
            }
            else if(s[i]==')'){
                low--;high--;
            }
            else {
                low--;
                high++;
            }
            if(low<0) low=0;
            if(high<0) return false;
            i++;
        }
        return low==0;
    }
};
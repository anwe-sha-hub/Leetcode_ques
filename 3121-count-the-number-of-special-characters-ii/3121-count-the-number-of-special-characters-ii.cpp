class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>lower(26,-1);
        vector<int>upper(26,-1);
        int c=0;
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(isupper(ch)){
            if(upper[ch-'A']==-1){
                upper[ch-'A']=i;
            }
        }
            if(islower(ch)){
lower[ch-'a']=i;
            }
        }
        for(int i=0;i<26;i++){
            if(lower[i]!=-1 && upper[i]!=-1 && lower[i]<upper[i]){
                c++;
            }
        }
        return c;
    }
};
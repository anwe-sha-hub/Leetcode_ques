class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        int c=0;
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(isupper(ch)){
                upper[ch-'A']++;
            }
            if(islower(ch)){
lower[ch-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(lower[i]>0 && upper[i]>0){
                c++;
            }
        }
        return c;
    }
};
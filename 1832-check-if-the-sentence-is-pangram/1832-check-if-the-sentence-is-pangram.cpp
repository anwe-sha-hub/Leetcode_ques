class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> freq(26, 0);
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]>='a' && sentence[i]<='z'){
                freq[sentence[i] - 'a'] = 1;
            }
        }

        for(int i = 0; i < 26; i++){
            if(freq[i] == 0) return false;
        }

        return true;
    }
};
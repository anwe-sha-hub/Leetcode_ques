class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>s;
        int index=-1;
        for(int i=0;i<=word.size();i++){
s.push(word[i]);
if(word[i]==ch){
    index=i;
    break;
}
        }
        if(index==-1)return word;
        for(int i=0;i<=index;i++){
word[i]=s.top();
s.pop();
        }
        return word;
    }
};
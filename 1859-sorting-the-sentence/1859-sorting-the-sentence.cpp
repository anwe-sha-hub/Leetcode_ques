class Solution {
public:
    string sortSentence(string s) {
        vector<string>ans(10);
        int c=0,index=0;
        string temp;
while(index<s.size()){
if(s[index]==' '){
    int pos=temp[temp.size()-1]-'0';
    temp.pop_back();
    ans[pos]=temp;
    temp.clear();
    c++;
}
else{
    temp+=s[index];
   }
    index++;
}
 int pos=temp[temp.size()-1]-'0';
    temp.pop_back();
    ans[pos]=temp;
    temp.clear();
    c++;
for(int i=0;i<=c;i++){
temp+=ans[i];
temp+=' ';
}
temp.erase(temp.begin()+0);
temp.pop_back();
return temp;
    }
};
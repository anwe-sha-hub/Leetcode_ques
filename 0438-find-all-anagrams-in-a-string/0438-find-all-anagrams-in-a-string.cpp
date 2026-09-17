class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(s.size()<p.size()) return ans;
        vector<int>need(26,0);
        vector<int>window(26,0);
        for(char c:p){
            need[c-'a']++;
        }
        int l=0,r=0,k=p.size();
        while(r<s.size()){
window[s[r]-'a']++;
if(r-l+1>k){
    window[s[l]-'a']--;
    l++;
}
if(r-l+1==k){
    if(window==need) ans.push_back(l);
}
     r++;
        }
   return ans;
    }
};
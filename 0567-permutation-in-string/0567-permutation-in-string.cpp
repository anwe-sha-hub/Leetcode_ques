class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        if(k>s2.size()) return false;


        vector<int>freq1(26,0);
        vector<int>freq2(26,0);

        for(char c:s1){
freq1[c-'a']++;
        }
int l=0,r=0;
        while(r<s2.size()){
            freq2[s2[r]-'a']++;
            while(r-l+1>k){
                freq2[s2[l]-'a']--;
                l++;
            }
            if(r-l+1==k){
                if(freq1==freq2) return true;
            }
                r++;
            }
            return false;
    }
};
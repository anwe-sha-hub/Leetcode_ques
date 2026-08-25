class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0,c=0,hash[256]={0},minlen=1e9,sin=-1;
        int m=t.size();
        for(int i=0;i<m;i++) hash[t[i]]++;
        
        while(r<s.size()){
            if(hash[s[r]]>0) c++;
            hash[s[r]]--;
            while(c==m){
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    sin=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0)c=c-1;
                l++;
            }
            r++;
        }   
        return sin==-1? "":s.substr(sin,minlen);
         }
};
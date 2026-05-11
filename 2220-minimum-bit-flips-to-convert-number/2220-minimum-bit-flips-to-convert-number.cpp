class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=start^goal;
        int c=0;
        while(ans>1){
            c+=ans&1;
            ans=ans>>1;
        }
        if(ans ==1) c+=1;
        return c;
    }
};
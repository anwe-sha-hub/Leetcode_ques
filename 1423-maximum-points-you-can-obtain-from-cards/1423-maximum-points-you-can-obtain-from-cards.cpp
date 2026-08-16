class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int l=0,r=0,maxlen=0;
        for(int i=0;i<k;i++){
l+=cardPoints[i];
        }
        maxlen=l;
        int midlen=n-1;
        for(int i=k-1;i>=0;i--){
            l-=cardPoints[i];
            r+=cardPoints[midlen];
midlen=midlen-1;
maxlen=max(maxlen,l+r);
        }
        return maxlen;
    }
};
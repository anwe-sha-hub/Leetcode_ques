class Solution {
public:
int maxii(vector<int>&p){
    int maxi=INT_MIN;
    for(int i=0;i<p.size();i++){
        maxi=max(maxi,p[i]);
    }
    return maxi;
}
long long findd(vector<int>&p,int h){

long long  total=0;
for(int i=0;i<p.size();i++){
   total+=(p[i] + h - 1) / h;
}
return total;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int st=1,end=maxii(piles);
        int ans=INT_MIN;
while(st<=end){
int mid=st+(end-st)/2;
long long midN=findd(piles,mid);
if(midN<=h){
    ans=mid;
    end=mid-1;
}
else st=mid+1;
}
return ans;
    }
};
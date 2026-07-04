class Solution {
public:
bool possible(vector<int>&arr,int day,int m,int k){
    int c=0,noofb=0;
    for(int i=0;i<arr.size();i++){
if(arr[i]<=day) c++;
else {
    noofb+=(c/k);
    c=0;
}
    }
    noofb+=(c/k);
    return noofb>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long val=m*1LL*k*1LL;
        if(val>n) return -1;
        int mini=INT_MAX, maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }
        int st=mini,end=maxi;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(possible(bloomDay,mid,m,k)) end=mid-1;
            else st=mid+1;
        }
        return st;
    }
};
class Solution {
public:
bool canwefind(vector<int>&arr,int dig,int m){
    int cnt=1,coord=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-coord>=dig){
            cnt++;
            coord=arr[i];
        }
    }
    if(cnt>=m) return true;
    else return false;
}
    int maxDistance(vector<int>& arr, int m) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int st=1,end=arr[n-1]-arr[0];

        while(st<=end){
            int mid=st+(end-st)/2;

            if(canwefind(arr,mid,m)==true) st=mid+1;
            else end=mid-1;
        }
        return end;
    }
};
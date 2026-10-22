class Solution {
public:

    int minOperations(vector<int>& nums) {
     int n=nums.size();
    int k=nums[0];
    bool inc=true,dec=true;

    for(int i=0;i<n;i++){
        if(nums[i]!=(k+i)%n)
            inc=false;

        if(nums[i]!=(k-i+n)%n)
            dec=false;
    }

    int ans=INT_MAX;

    if(inc){
        int r=(n-k)%n;
        ans=min(ans,min(r,k+2));
    }

    if(dec){
        int r=n-1-k;
        ans=min(ans,1+min(r,n-r));
    }

    if(ans==INT_MAX)
        return -1;

    return ans;
}
};
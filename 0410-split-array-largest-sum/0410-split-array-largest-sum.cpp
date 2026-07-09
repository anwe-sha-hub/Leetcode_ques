class Solution {
public:
int countstudents(vector<int>&nums,int pages){
    int st=1;long long pagest=0;
    for(int i=0;i<nums.size();i++){
        if(pagest+nums[i]<=pages) pagest+=nums[i];
        else{
            st++;
            pagest=nums[i];
        }
    }
    return st;
}
int findpages(vector<int>&nums,int n,int k){
if(k>n) return -1;
int low=*max_element(nums.begin(),nums.end());
int high=accumulate(nums.begin(),nums.end(),0);
while(low<=high){
int mid=(low+high)/2;
int stu=countstudents(nums,mid);
if(stu>k) low=mid+1;
else high=mid-1;
}
return low;
}
    int splitArray(vector<int>& nums, int k) {
        return findpages(nums,nums.size(),k);
    }
};
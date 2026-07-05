class Solution {
public:
int sumofd(vector<int>&nums,int div){
    int s=0,n=nums.size();
    for(int i=0;i<n;i++){
        s+=ceil((double)(nums[i])/(double)(div));
    }
    return s;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int st=1,end=*max_element(nums.begin(),nums.end());
        while(st<=end){
            int mid=st+(end-st)/2;
            if(sumofd(nums,mid)<=threshold) end=mid-1;
            else st=mid+1;
        }
        return st;
    }
};
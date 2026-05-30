class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<long long,int>presum;
        int c=0;
        long long sum=0;
        presum[0] = 1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            
            int rem=sum-k;
            if(presum.find(rem)!=presum.end()){
               c+=presum[rem];
            }
            presum[sum]++;
        }
        return c;
    }
};
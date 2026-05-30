class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>store;
        for(int i=0;i<nums.size();i++){
            int r=nums[i];
            int m=target-r;
            if(store.find(m)!=store.end()){
                return {store[m],i};
            }
           store[nums[i]]=i;
        }
         return {-1,-1};
    }
};
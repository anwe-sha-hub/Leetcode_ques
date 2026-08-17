class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int s=0,c=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            if(mp.find(s-goal)!=mp.end()){
                c+=mp[s-goal];
            }
            mp[s]++;
        }
        return c;
    }
};
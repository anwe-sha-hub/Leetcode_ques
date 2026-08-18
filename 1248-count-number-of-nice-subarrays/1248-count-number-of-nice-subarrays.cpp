class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int c=0,s=0;
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++) {s+=nums[i]%2;
        if(mp.find(s-k)!=mp.end()) c+=mp[s-k];
        mp[s]++;
        }
return c;
    }
};
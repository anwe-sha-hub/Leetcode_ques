class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l=0,r=0,maxi=0;
        unordered_set<int>st;
        while(r<nums.size()){
            if(st.count(nums[r])) return true;
            st.insert(nums[r]);
            if(r-l+1>k){
                st.erase(nums[l]);
                l++;
            }
            r++;
        }
return false;
    }
};
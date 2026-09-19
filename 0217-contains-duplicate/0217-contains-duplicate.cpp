class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int r=0;
        unordered_set<int>st;
        while(r<nums.size()){
            if(st.count(nums[r])) return true;
                st.insert(nums[r]);
            r++;
        }
        return false;
    }
};
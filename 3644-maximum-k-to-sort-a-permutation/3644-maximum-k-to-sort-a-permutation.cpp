class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans = 0;
        bool found = false;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) {
                if (!found) {
                    ans = nums[i];
                    found = true;
                } else {
                    ans &= nums[i];
                }
            }
        }

        if (!found)
            return 0;

        return ans;
    }
};
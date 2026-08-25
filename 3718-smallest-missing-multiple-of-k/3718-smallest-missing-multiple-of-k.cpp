class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int m = k;

        while(true) {

            bool found = false;

            for(int i=0;i<nums.size();i++) {

                if(nums[i] == m) {
                    found = true;
                    break;
                }
            }

            if(found == false)
                return m;

            m += k;
        }
    }
};
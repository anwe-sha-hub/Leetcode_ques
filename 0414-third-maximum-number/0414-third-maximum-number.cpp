class Solution {
public:
    int thirdMax(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int cnt = 1;  // largest distinct element
        int prev = nums.back();

        for(int i = nums.size() - 2; i >= 0; i--) {

            // new distinct element found
            if(nums[i] != prev) {
                cnt++;
                prev = nums[i];

                // third distinct maximum
                if(cnt == 3) return nums[i];
            }
        }

        // less than 3 distinct elements
        return nums.back();
    }
};
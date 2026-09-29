class FindSumPairs {
    vector<int> nums1, nums2;
    unordered_map<int, int> freq2;

public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) : nums1(nums1), nums2(nums2) {
        for (int num : nums2) {
            freq2[num]++;
        }
    }

    void add(int index, int val) {
        // Update the frequency map
        freq2[nums2[index]]--;  // Remove the old value
        nums2[index] += val;    // Update the value
        freq2[nums2[index]]++;  // Add the new value
    }

    int count(int tot) {
        int res = 0;
        for (int num : nums1) {
            int complement = tot - num;
            if (freq2.count(complement)) {
                res += freq2[complement];
            }
        }
        return res;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
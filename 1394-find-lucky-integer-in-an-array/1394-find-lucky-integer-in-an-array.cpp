class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;
        
        // Count frequency of each number
        for (int num : arr) {
            freq[num]++;
        }
        
        int ans = -1;
        
        // Check for lucky integers
        for (auto& pair : freq) {
            if (pair.first == pair.second) {
                ans = max(ans, pair.first);
            }
        }
        
        return ans;
    }
};
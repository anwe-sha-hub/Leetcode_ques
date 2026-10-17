class Solution {
public:
   int digitSum(int x) {
        int s = 0;
        while(x > 0) {
            s += x % 10;
            x /= 10;
        }
        return s;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<pair<int,int>,int>> arr;

        for(int i = 0; i < n; i++) {
            arr.push_back({{digitSum(nums[i]), nums[i]}, i});
        }

        sort(arr.begin(), arr.end());

        vector<int> vis(n, 0);
        int ans = 0;

        for(int i = 0; i < n; i++) {
            if(vis[i] || arr[i].second == i) {
                continue;
            }

            int j = i;
            int cnt = 0;

            while(!vis[j]) {
                vis[j] = 1;
                j = arr[j].second;
                cnt++;
            }

            ans += cnt - 1;
        }

        return ans;
    }
};
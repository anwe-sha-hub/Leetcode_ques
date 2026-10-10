class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<int> diff;
        long long sum = 0;
        int mx = 0;

        for(int i=0; i<nums1.size(); i++) {
            int d = abs(nums1[i] - nums2[i]);
            diff.push_back(d);
            sum += d;
            mx = max(mx, d);
        }

        long long k = 1LL*k1 + k2;

        if(sum <= k) return 0;

        int low = 0, high = mx;

        while(low < high) {
            int mid = low + (high-low)/2;
            long long need = 0;

            for(int i=0; i<diff.size(); i++) {
                if(diff[i] > mid)
                    need += diff[i] - mid;
            }

            if(need <= k)
                high = mid;
            else
                low = mid + 1;
        }

        int x = low;
        long long need = 0, ans = 0;

        for(int i=0; i<diff.size(); i++) {
            if(diff[i] > x)
                need += diff[i] - x;

            long long d = min(diff[i], x);
            ans += d*d;
        }

        long long rem = k - need;
        ans -= rem * (2LL*x - 1);

        return ans;
    }
};
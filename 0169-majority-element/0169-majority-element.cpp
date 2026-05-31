class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int freq = 0;
        // int ans = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (freq == 0)
        //         ans = nums[i];
        //     if (ans == nums[i]) {
        //         freq++;
        //     } else {
        //         freq--;
        //     }
        // }

        // return ans;
        int c=0;
        int el;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                c++;
                el=nums[i];
            }
            else if(el==nums[i]){
                c++;
            }
            else{
                c--;
            }
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el){
                cnt++;
            }
        }
        if(cnt>(nums.size()/2)) return el;
        return -1;
    }
};
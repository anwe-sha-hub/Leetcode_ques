class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num=nums[i];
            int c=0;
            while(num>0){
                num/=10;
                c++;
            }
        if(c%2==0){
             ans++;
        }
    }
    return ans;
    }
};
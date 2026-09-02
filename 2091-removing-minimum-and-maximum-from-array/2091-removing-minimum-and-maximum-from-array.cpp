class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=0,maxi=0;
int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>nums[maxi]) maxi=i;
            if(nums[i]<nums[mini])mini=i;
        }
         if (mini > maxi)
            swap(mini, maxi);

        int front = maxi + 1;
        int back = n - mini;
        int bothSides = (mini+ 1) + (n - maxi);

        return min({front, back, bothSides});
    }
    
};
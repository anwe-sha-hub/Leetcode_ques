class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            if(nums[x]!=nums[i]){
                nums[x+1]=nums[i];
                x++;
            }
        }
        return x+1;
    }
};
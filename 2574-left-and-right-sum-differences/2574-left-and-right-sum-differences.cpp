class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;
        int leftsum=0,rightsum=0;
        for(int i=0;i<nums.size();i++){

    rightsum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            rightsum-=nums[i];
            ans.push_back(abs(leftsum-rightsum));
            leftsum+=nums[i];
        }
        return ans;
    }
};
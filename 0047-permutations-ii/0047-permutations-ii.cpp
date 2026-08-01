class Solution {
public:
void fun(int ind,vector<int>&nums,vector<vector<int>>&ans){
    if(ind==nums.size()){
        ans.push_back(nums);
        return;
    }
      unordered_set<int> st;

    for(int i=ind;i<nums.size();i++){

        if(st.find(nums[i])!=st.end()) continue;

        st.insert(nums[i]);

        swap(nums[i],nums[ind]);
        fun(ind+1,nums,ans);
        swap(nums[i],nums[ind]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        fun(0,nums,ans);
        return ans;
    }
};
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        vector<int>st;
        for(int i=0;i<n;i++){
ans=nums[i]*nums[i];
st.push_back(ans);
        }
        sort(st.begin(),st.end());
        return st;
    }
};
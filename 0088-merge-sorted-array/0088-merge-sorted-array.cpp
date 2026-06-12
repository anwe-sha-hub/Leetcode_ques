class Solution {
public:
void swapgreater(vector<int>& arr1 ,vector<int>&arr2,int ind1,int ind2){
    if(arr1[ind1]>arr2[ind2]){
        swap(arr1[ind1],arr2[ind2]);
    }
}
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //using gap 
        int len=n+m;
        int gap=(len/2)+(len%2);
        while(gap>0){
            int left=0;
            int right=left+gap;
            while(right< len){
                if(left<m && right>=m){
                    swapgreater(nums1,nums2,left,right-m);
                }
                else if(left>=m){
                    swapgreater(nums2,nums2,left-m,right-m);
                }
                else{
                    swapgreater(nums1,nums1,left,right);
                }
                left++;
                right++;
            }
            if(gap==1) break;
            gap=(gap/2)+(gap%2);
        }
        for(int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int st=0,end=n-1;
int sum=0;
        while(st<=end){
            
int sum=numbers[st]+numbers[end];
if(sum>target) end--; 
else if(sum<target) st++;
else 
return {st+1,end+1};
            }
return {};
    }
};
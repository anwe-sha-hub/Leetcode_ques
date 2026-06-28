class Solution {
public:
    int mySqrt(int x) {
        int st=1,end=x;
        while(st<=end){
            long long mid=st+(end-st)/2;
            long long val=mid*mid;

            if(val>x) end=mid-1;
            else st=mid+1;
        }
        return end;
    }
};
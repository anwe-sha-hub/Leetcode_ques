class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        // check power of 2
        if((n & (n - 1)) != 0) return false;

        int count = 0;

        // count trailing zeros
        while(n > 1){
            n = n >> 1;
            count++;
        }

        return count % 2 == 0;
    }
};
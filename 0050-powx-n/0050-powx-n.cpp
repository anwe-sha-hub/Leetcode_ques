class Solution {
public:
    double myPow(double x, int n) {
        // apna college
        //    long binform=n;
        //    double ans=1;
        //    if(n<0){
        //     x=1/x;
        //     binform=-binform;
        //    }
        //    while(binform>0){
        //     if(binform % 2==1){
        //         ans*=x;}
        //         x*=x;
        //         binform/=2;
        //     }
        //    return ans;
        //    }
        // striver
        long long N = n;
        if(N<0){
            x=1/x;
            N=-N;
        }
        double ans = 1;
        while (N > 0) {
            if (N % 2 == 0) {
                N /= 2;
                x = x * x;
            } else {
                N = N - 1;
                ans = ans * x;
            }
        }

        return ans;
    }
    };
class Solution {
public:
    bool canAliceWin(int n) {
       int rem=10;
       bool al=true;

       while(n>=rem){
        n-=rem;
rem--;
al=!al;
       }
       return !al;
    }
};
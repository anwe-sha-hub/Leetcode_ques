class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int l=0;
        int c5=0,c10=0,c20=0;
        int n=bills.size();
        while(l<n){
if(bills[l]==5){
    c5++;
l+=1;
}
else if(bills[l]==10){
    if(c5==0) return false;
    c10++;
    c5--;
    l+=1;
}
else{
    if(c5>0 && c10>0){
        c10--;
        c5--;
    }
    else if(c5>=3) c5-=3;
    else{
        return false;
    }
    c20++;
    l+=1;
}
        }
return true;

        }
};
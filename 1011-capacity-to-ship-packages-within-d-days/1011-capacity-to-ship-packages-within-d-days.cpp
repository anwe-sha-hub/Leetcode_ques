class Solution {
public:
int finddays(vector<int>&weights,int cap){
    int s=1,c=0;

    for(int i=0;i<weights.size();i++){

        if(weights[i]+c >cap){
              s++;
            c=weights[i];
        }
        else c+=weights[i];
    }
    return s;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int st=*max_element(weights.begin(),weights.end());
        int end=accumulate(weights.begin(),weights.end(),0);

        while(st<=end){
            int mid=st+(end-st)/2;
            int noofdays=finddays(weights,mid);
            if(noofdays <=days){
                end=mid-1;
            }
            else st=mid+1;
        }
        return st;
    }
};
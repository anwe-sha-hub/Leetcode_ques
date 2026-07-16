class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      int n=gas.size();
      int depicit=0;
      int start=0;
      int balance=0;
      for(int i=0;i<n;i++){
        balance+=gas[i]-cost[i];
        if(balance<0){
            depicit+=balance;
            start=i+1;
            balance=0;
        }
      }  
      if(depicit+balance>=0){
        return start;
      }
      else{
        return -1;
      }
    }
};
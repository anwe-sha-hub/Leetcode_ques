class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
int n=drones.size();
        int ans=-1;
        int midi=INT_MAX;
        for(int i=0;i<n;i++){
           
                int col=abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]);
            if(col<=drones[i][2]){
                if(col<midi){
                    midi=col;
                    ans=i;
                }
            }
                
        }
        return ans;
    }
};
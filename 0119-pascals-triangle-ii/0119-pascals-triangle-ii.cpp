class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ansRow;
        ansRow.push_back(1);
        long long res=1;
        for(int i=1;i<=rowIndex;i++){
            res*=(rowIndex-i+1);
            res/=i;
            ansRow.push_back(res);
        }
        return ansRow;
    }
};
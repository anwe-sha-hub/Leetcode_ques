class Solution {
public:
    vector<int> intersection(vector<int>& n, vector<int>& m) {
         sort(n.begin(), n.end());
        sort(m.begin(), m.end());
        int i=0,j=0;
        int n1=n.size();
        int n2=m.size();
        vector<int>ans;
        while(i<n1 && j<n2){
            if(n[i]<m[j]){
                i++;
            }
            else if(n[i]>m[j]){
                j++;
            }
            else{
                if(ans.size()==0 || ans.back()!=n[i]){
                    ans.push_back(n[i]);
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};
class Solution {
public:
    bool isValid(string s) {
        int cnt = 0;

        for(int i=0; i<s.length(); i++) {

            if(s[i]=='(') {
                cnt++;
            }
            else if(s[i]==')') {
                cnt--;

                if(cnt < 0)
                    return false;
            }
        }

        return cnt == 0;
    }

    vector<string> removeInvalidParentheses(string s) {

        vector<string> ans;

        queue<string> q;
        set<string> vis;

        q.push(s);
        vis.insert(s);

        bool found = false;

        while(!q.empty()) {

            int size = q.size();

            for(int i=0; i<size; i++) {

                string str = q.front();
                q.pop();

                if(isValid(str)) {
                    ans.push_back(str);
                    found = true;
                }

                if(found)
                    continue;

                for(int j=0; j<str.length(); j++) {

                    if(str[j]!='(' && str[j]!=')')
                        continue;

                    string temp = str.substr(0,j) + str.substr(j+1);

                    if(vis.find(temp) == vis.end()) {
                        vis.insert(temp);
                        q.push(temp);
                    }
                }
            }

            if(found)
                break;
        }

        return ans;
    }
};
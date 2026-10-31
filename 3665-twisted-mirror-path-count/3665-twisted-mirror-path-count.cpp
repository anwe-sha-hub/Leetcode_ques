class Solution {
public:
    int uniquePaths(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        const int MOD = 1e9 + 7;

        vector<vector<int>> right(m, vector<int>(n, 0));
        vector<vector<int>> down(m, vector<int>(n, 0));

        right[0][0] = 1;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                int r = right[i][j];
                int d = down[i][j];

                if(grid[i][j] == 1) {

                    // Mirror: right becomes down
                    if(i + 1 < m) {
                        down[i+1][j] = (down[i+1][j] + r) % MOD;
                    }

                    // Mirror: down becomes right
                    if(j + 1 < n) {
                        right[i][j+1] = (right[i][j+1] + d) % MOD;
                    }

                }
                else {
                    int ways = (r + d) % MOD;

                    // Move right
                    if(j + 1 < n) {
                        right[i][j+1] = (right[i][j+1] + ways) % MOD;
                    }

                    // Move down
                    if(i + 1 < m) {
                        down[i+1][j] = (down[i+1][j] + ways) % MOD;
                    }
                }
            }
        }

        return (right[m-1][n-1] + down[m-1][n-1]) % MOD;
     
    }
};
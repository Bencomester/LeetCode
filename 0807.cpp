class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> rows(n, 0);
        vector<int> cols(n, 0);
        for (int i = 0; i < n; i++) {
            int r = 0;
            int c = 0;
            for (int j = 0; j < n; j++) {
                r = max(r, grid[i][j]);
                c = max(c, grid[j][i]);
            }
            rows[i] = r;
            cols[i] = c;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cnt += min(rows[i], cols[j]) - grid[i][j];
            }
        }
        return cnt;
    }
};

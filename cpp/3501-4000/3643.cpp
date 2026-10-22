class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < k / 2; j++) {
                swap(grid[x + j][y + i], grid[x + k - 1 - j][y + i]);
            }
        }
        return move(grid);
    }
};

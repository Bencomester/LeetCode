class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> result;
        for (int i = 0; i < grid.size() - 2; i++) {
            vector<int> row;
            for (int j = 0; j < grid.size() - 2; j++) {
                row.push_back(findMax(grid, i, j));
            }
            result.push_back(row);
        }
        return result;
    }

    int findMax(vector<vector<int>>& grid, int a, int b) {
        int max = 1;
        for (int i = a; i < a + 3; i++) {
            for (int j = b; j < b + 3; j++) {
                if (grid[i][j] > max) max = grid[i][j];
            }
        }
        return max;
    }
};

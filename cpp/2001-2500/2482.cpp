class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int len1 = grid.size();
        int len2 = grid[0].size();

        vector<int> temp(len2, 0);
        vector<vector<int>> result(len1, temp);
        for (int i = 0; i < len1; i++) {
            int row = 0;
            for (const int& j : grid[i]) {
                if (j) row++;
                else row--;
            }
            for (int j = 0; j < len2; j++) result[i][j] += row;
        }

        for (int i = 0; i < len2; i++) {
            int col = 0;
            for (int j = 0; j < len1; j++) {
                if (grid[j][i]) col++;
                else col--;
            }
            for (int j = 0; j < len1; j++) result[j][i] += col;
        }
        return result;
    }
};

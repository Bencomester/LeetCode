class Solution {
public:
    int numMagicSquaresInside(const vector<vector<int>>& grid) {
        if (grid.size() < 3) return 0;
        if (grid[0].size() < 3) return 0;

        int cnt = 0;
        for (int i = 0; i < grid.size() - 2; i++) {
            for (int j = 0; j < grid[i].size() - 2; j++) {
                if (isMagicSqr(grid, i, j)) cnt++;
            }
        }
        return cnt;
    }

    bool isMagicSqr(const vector<vector<int>>& grid, const int& x, const int& y) {
        const int sum = grid[x][y] + grid[x + 1][y] + grid[x + 2][y];
        unordered_set<int> nums;
        for (int i = 0; i < 3; i++) {
            int colsum = 0;
            int rowsum = 0;
            for (int j = 0; j < 3; j++) {
                const int n = grid[x + i][y + j];
                if (n > 9 || n == 0) return false;
                if (nums.contains(n)) return false;
                nums.insert(n);
                rowsum += n;
                colsum += grid[x + j][y + i];
            }
            if (rowsum != sum) return false;
            if (colsum != sum) return false;
        }
        int diasum1 = 0;
        int diasum2 = 0;
        for (int i = 0; i < 3; i++) {
            diasum1 += grid[x + i][y + i];
            diasum2 += grid[x + 2 - i][y + i];
        }
        if (diasum1 != sum) return false;
        if (diasum2 != sum) return false;
        return true;
    }
};

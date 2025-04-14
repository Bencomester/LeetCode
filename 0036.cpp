class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<char> row;
            unordered_set<char> col;
            for (int j = 0; j < 9; j++) {
                if (row.contains(board[i][j]) || col.contains(board[j][i])) return false;
                if (board[i][j] != '.') row.insert(board[i][j]);
                if (board[j][i] != '.') col.insert(board[j][i]);
            }
        }

        for (int a = 0; a < 9; a += 3) {
            for (int b = 0; b < 9; b += 3) {
                unordered_set<char> cell;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        if (board[a + i][b + j] == '.') continue;
                        if (cell.contains(board[a + i][b + j])) return false;
                        cell.insert(board[a + i][b + j]);
                    }
                }
            }
        }
        return true;
    }
};

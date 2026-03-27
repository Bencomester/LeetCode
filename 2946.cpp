class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        for (int i = 0; i < mat.size(); i++) {
            int s = mat[i].size();
            for (int j = 0; j < s; j++) {
                if (mat[i][j] != mat[i][((j + k) % s + s) % s]) return false;
            }
            k *= -1;
        }
        return true;
    }
};

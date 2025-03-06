class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size() * grid.size();
        vector<int> count(n, 0);
        for (vector<int> i : grid) {
            for (int j : i) {
                count[j - 1]++;
            }
        }
        int a, b;
        for (int i = 0; i < count.size(); i++) {
            if (count[i] == 0) b = i + 1;
            else if (count[i] == 2) a = i + 1;
        }
        return {a, b};
    }
};

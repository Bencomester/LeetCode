class Solution {
public:
    int countPoints(string rings) {
        vector<vector<int>> rods(10, {0, 0, 0});
        for (int i = 0; i < rings.length(); i += 2) {
            rods[rings[i + 1] - '0'][rings[i] == 'R' ? 0 : (rings[i] == 'G' ? 1 : 2)]++;
        }
        int count = 0;
        for (vector<int> r : rods) {
            if (r[0] > 0 && r[1] > 0 && r[2] > 0) count++;
        }
        return count;
    }
};

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> result;
        for (vector<int> v : queries) {
            int cnt = 0;
            for (vector p : points) if (pow(p[0] - v[0], 2) + pow(p[1] - v[1], 2) <= pow(v[2], 2)) cnt++;
            result.push_back(cnt);
        }
        return result;
    }
};

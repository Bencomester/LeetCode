class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int, int> map;

        for (auto& d : dominoes) {
            int a = min(d[0], d[1]);
            int b = max(d[0], d[1]);
            map[10 * a + b]++;
        }

        int cnt = 0;
        for (auto& item : map) if (item.second > 1) cnt += item.second * (item.second - 1) / 2;
        return cnt;
    }
};

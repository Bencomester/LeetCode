class Solution {
public:
    int numRabbits(vector<int>& answers) {
        map<int, int> map;
        for (int i : answers) map[i]++;

        int cnt = 0;
        for (auto item : map) {
            int mult = item.second / (item.first + 1);
            if (item.second % (item.first + 1)) mult++;
            cnt += mult * (item.first + 1);
        }
        return cnt;
    }
};

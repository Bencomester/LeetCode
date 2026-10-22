class Solution {
public:
    short minimumPushes(string& word) {
        unordered_map<char, short> map;
        for (char& c : word) map[c]++;
        multiset<short> set;
        for (auto& pair : map) set.insert(pair.second);

        short cnt = 0;
        short i = 0;
        for (auto it = set.rbegin(); it != set.rend(); it++) {
            cnt += *it * (i++ / 8 + 1);
        }
        return cnt;
    }
};

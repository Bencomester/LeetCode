class Solution {
public:
    int maxDifference(string s) {
        map<char, int> map;
        for (char c : s) map[c]++;
        int min = INT_MAX, max = INT_MIN;
        for (auto item : map) {
            if (item.second > max && item.second % 2 == 1) max = item.second;
            else if (item.second < min && item.second % 2 == 0) min = item.second;
        }

        return max - min;
    }
};

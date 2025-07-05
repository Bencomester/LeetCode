class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> map;
        for (int i : arr) map[i]++;
        int n = -1;
        for (auto item : map) {
            if (item.first != item.second) continue;
            if (item.first > n) n = item.first;
        }
        return n;
    }
};

class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char, vector<int>> map;
        for (int i = 0; i < s.length(); i++) {
            vector<int>& v = map[s[i]];
            if (v.size() == 0) v = {i, i};
            else v[1] = i;
        }
        vector<vector<int>> ranges;
        for (auto i : map) {
            vector<int> v = i.second;
            if (v.size()) ranges.push_back(v);
        }
        sort(ranges.begin(), ranges.end());
        vector<vector<int>> merged;
        int start = ranges[0][0];
        int end = ranges[0][1];
        for (int i = 1; i < ranges.size(); i++) {
            if (ranges[i][0] < end) end = max(end, ranges[i][1]);
            else {
                merged.push_back({start, end});
                start = ranges[i][0];
                end = ranges[i][1];
            }
        }
        merged.push_back({start, end});
        vector<int> result;
        for (vector<int> v : merged) result.push_back(v[1] - v[0] + 1);
        return result;
    }
};

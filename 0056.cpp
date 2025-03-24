class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        int len = intervals.size();
        vector<vector<int>> merged;
        for (int i = 1; i < len; i++) {
            if (intervals[i][0] <= end) end = max(end, intervals[i][1]);
            else {
                merged.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        merged.push_back({start, end});
        return merged;
    }
};

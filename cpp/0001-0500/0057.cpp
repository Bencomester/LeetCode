class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int len = intervals.size();
        for (int i = len - 1; i >= 0; i--) {
            if (intervals[i][0] > newInterval[0]) continue;
            if (intervals[i][0] == newInterval[0]) if (intervals[i][1] < newInterval[1]) continue; 
            intervals.insert(intervals.begin() + i + 1, newInterval);
            break;
        }
        if (intervals.size() == len) intervals.insert(intervals.begin(), newInterval);
        vector<vector<int>> merged;
        int start = intervals[0][0];
        int end = intervals[0][1];
        for (int i = 1; i <= len; i++) {
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

class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        vector<vector<int>> merged;
        int start = meetings[0][0];
        int end = meetings[0][1];
        int len = meetings.size();
        for (int i = 1; i < len; i++) {
            if (meetings[i][0] <= end + 1) end = max(end, meetings[i][1]);
            else {
                merged.push_back({start, end});
                start = meetings[i][0];
                end = meetings[i][1];
            }
        }
        merged.push_back({start, end});
        len = merged.size() - 1;
        int cnt = merged[0][0] + (days - merged[len][1]) - 1;
        for (int i = 0; i < len; i++) cnt += merged[i + 1][0] - merged[i][1] - 1;
        return cnt;
    }
};

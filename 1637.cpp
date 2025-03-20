class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int len = points.size() - 1;
        sort(points.begin(), points.end(), [&](vector<int>& a, vector<int>& b) {return a[0] < b[0];});
        int dst = 0;
        for (int i = 0; i < len; i++) dst = max(dst, points[i + 1][0] - points[i][0]);
        return dst;
    }
};

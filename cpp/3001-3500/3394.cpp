class Solution {
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<vector<int>> vec;
        for (vector<int> v : rectangles) vec.push_back({v[0], v[2]});
        vector<vector<int>> gaps = merge(vec);
        if (gaps.size() >= 3) return true;
        
        vec.clear();
        for (vector<int> v : rectangles) vec.push_back({v[1], v[3]});
        gaps = merge(vec);
        if (gaps.size() >= 3) return true;

        return false;
    }

    vector<vector<int>> merge(vector<vector<int>>& vec) {
        sort(vec.begin(), vec.end());
        int start = vec[0][0];
        int end = vec[0][1];
        int len = vec.size();
        vector<vector<int>> v;
        for (int i = 1; i < len; i++) {
            if (vec[i][0] < end) end = max(end, vec[i][1]);
            else {
                v.push_back({start, end});
                start = vec[i][0];
                end = vec[i][1];
            }
        }
        v.push_back({start, end});
        return v;
    }
};

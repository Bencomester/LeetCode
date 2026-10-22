class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int, int> topcnt;
        unordered_map<int, int> btmcnt;
        unordered_map<int, int> samecnt;
        int len = tops.size();
        for (int i = 0; i < len; i++) {
            topcnt[tops[i]]++;
            btmcnt[bottoms[i]]++;
            if (tops[i] == bottoms[i]) samecnt[tops[i]]++;
        }
        
        vector<int> nums;
        for (int i = 1; i <= 6; i++) if (topcnt[i] + btmcnt[i] - samecnt[i] >= len) nums.push_back(i);
        if (nums.empty()) return -1;

        int cnt = INT_MAX;
        for (int& i : nums) {
            if (topcnt[i] > btmcnt[i]) cnt = min(cnt, len - topcnt[i]);
            else cnt = min(cnt, len - btmcnt[i]);
        }

        return cnt;
    }
};

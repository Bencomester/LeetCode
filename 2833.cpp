class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = 0;
        int cnt = 0;
        for (const char& c : moves) {
            if (c == 'L') n--;
            else if (c == 'R') n++;
            else cnt++;
        }
        return abs(n) + cnt;
    }
};

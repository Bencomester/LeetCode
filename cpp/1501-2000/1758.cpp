class Solution {
public:
    int minOperations(const string& s) {
        int cnt1 = 0, cnt2 = 0;
        bool b = true;
        for (const char& c : s) {
            if (c == '1') {
                cnt1 += b;
                cnt2 += !b;
            }
            if (c == '0') {
                cnt1 += !b;
                cnt2 += b;
            }
            b = !b;
        }
        return min(cnt1, cnt2);
    }
};

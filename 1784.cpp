class Solution {
public:
    bool checkOnesSegment(const string& s) {
        bool hadZero = false;
        for (int i = 0; i < s.length(); i++) {
            if (hadZero && s[i] == '1') return false;
            if (s[i] == '0') hadZero = true;
        }
        return true;
    }
};

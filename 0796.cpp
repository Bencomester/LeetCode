class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;
        for (int i = 0; i < s.length(); i++) {
            bool found = true;
            for (int j = 0; j < s.length(); j++) {
                if (s[(j + i) % s.length()] != goal[j]) found = false;
                if (!found) break;
            }
            if (found) return true;
        }
        return false;
    }
};

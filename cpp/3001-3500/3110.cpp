class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            int sub = s[i] - s[i + 1];
            if (sub < 0) sub = -sub;
            sum += sub;
        }
        return sum;
    }
};

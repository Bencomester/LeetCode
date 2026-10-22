class Solution {
public:
    string removeOuterParentheses(string s) {
        string str = "";
        int level = 0;
        for (char c : s) {
            if (c == '(') {
                if (level++ == 0) continue;
                str += c;
            } else {
                if (--level == 0) continue;
                str += c;
            }
        }
        return str;
    }
};
